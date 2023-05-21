#include <stdio.h>
#include <string.h>

union var_value
{
    int i;
    float f;
    char c;
};

struct var
{
    enum var_type
    {
        INT,
        FLOAT,
        CHAR
    } type;
    union var_value value;
};

void setInt(struct var *var, int value)
{
    var->type = INT;
    var->value.i = value;
}

void setFloat(struct var *var, float value)
{
    var->type = FLOAT;
    var->value.f = value;
}

void setChar(struct var *var, char value)
{
    var->type = CHAR;
    var->value.c = value;
}

char *varToString(struct var *var)
{
    static char buffer[20];

    switch (var->type)
    {
    case INT:
        sprintf(buffer, "%d", var->value.i);
        break;
    case FLOAT:
        sprintf(buffer, "%f", var->value.f);
        break;
    case CHAR:
        sprintf(buffer, "%c", var->value.c);
        break;
    }

    return buffer;
}

void printVarArray(struct var *varArray, int size)
{
    int i;

    for (i = 0; i < size; i++)
    {
        printf("%s\n", varToString(&varArray[i]));
    }
}

int main()
{
    struct var varArray[10];
    int i;

    for (i = 0; i < 10; i++)
    {
        setInt(&varArray[i], i + 1);
    }

    for (i = 0; i < 10; i++)
    {
        setChar(&varArray[i], 'A' + i);
    }

    printVarArray(varArray, 10);

    return 0;
}