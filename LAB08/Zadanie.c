#include <stdio.h>
#include <stdlib.h>

typedef enum {INT, FLOAT, CHAR} var_type;

typedef struct {
    var_type type;
    union {
        int i;
        float f;
        char c;
    } value;
} var;

void setInt(var *v, int d) {
    v->value.i = d;
    v->type = INT;
}

void setFloat(var *v, float d) {
    v->value.f = d;
    v->type = FLOAT;
}

void setChar(var *v, char d) {
    v->value.c = d;
    v->type = CHAR;
}

char* varToString(var *v) {
    switch (v->type) {
        case INT:
            char intStr[20];
            sprintf(intStr, "%d", v->value.i);
            return intStr;
        case FLOAT:
            char floatStr[20];
            sprintf(floatStr, "%f", v->value.f);
            return floatStr;
        case CHAR:
            char charStr[2];
            sprintf(charStr, "%c", v->value.c);
            return charStr;
        default:
            return "";
    }
}

int main() {
    // Create array
    var array[10];

    // Set values (int)
    for (int i=0; i<10; i++) {
        setInt(&array[i], i+1);
    }

    // Set values (char)
    for (int i=0; i<10; i++) {
        setChar(&array[i], 'A' + i);
    }

    // Print values
    for (int i=0; i<10; i++) {
        printf("%s\n", varToString(&array[i]));
    }

    return 0;
}