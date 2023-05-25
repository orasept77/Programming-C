#include <string.h>
#include <stdio.h>

float stats(int tab[], char type[]){
    if (strcmp(type, "mean")){
        printf("mean");
        return 1.1;
    }
    else if (strcmp(type, "min"))
    {
        printf("min");
        return 2.2;
    }
    
}

int main(int argc, char const *argv[])
{
    int c[] = {1,2,3};
    stats(c, "mean");
    return 0;
}
