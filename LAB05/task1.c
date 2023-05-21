#include <stdio.h>  

struct car
{
    unsigned int i;
    unsigned int j;
};
  
int main()  
{  
    int i, j; 
    printf("|a  |b  |And(&) |OR(|)  |\n|---|---|-------|-------|\n"); 
  
    for(i = 0; i < 2; i++)  
    {  
        for(j = 0; j < 2; j++)  
        {   
            printf("|%d  |%d  |%d      |%d      |\n", i, j, i&j, i|j);  
        }  
    }  
    return 0;  
}  

/*
|a  |b  |And(&) |OR(|)  |
|---|---|-------|-------|
|0  |0  |0      |0      |
|0  |1  |0      |1      |
|1  |0  |0      |1      |
|1  |1  |1      |1      |
*/