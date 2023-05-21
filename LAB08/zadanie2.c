#include <stdio.h>
#include <stdlib.h>


struct Var{
    enum Type {
        INT,
        FLOAT,
        CHAR
    } type;
    union Value{
        int i;
        float f;
        char c;
    } value;
};
int main(int argc, char const *argv[])
{
    
    return 0;
}
