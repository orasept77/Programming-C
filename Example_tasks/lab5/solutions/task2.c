#include <stdio.h>
#include <stdlib.h>

int asd(){
    exit(EXIT_FAILURE);
    printf("to nie powinno być widoczne");
}

int main(int argc, char const *argv[])
{
    asd();
    printf("to nie powinno być widoczne");
    
    return 0;
}
