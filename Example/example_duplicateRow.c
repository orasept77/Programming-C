#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void duplicateRow(float *array, int size, int index, int repeats)
{
    if(index+repeats>size)
    {
        printf("warring");
    }
    float *temp_array = malloc(sizeof(float)*(size+repeats));

    for(int i=0; i<size; i++)
    {
        temp_array[i]=array[i];
    }
    for(int j=0; j<repeats; j++)
    {
        temp_array[size+j] = array[index];
    }
    for(int k=0; k<size+repeats; k++)
    {
        array[k] = temp_array[k];
    }

    free(temp_array);

    FILE *f = fopen("duplicateRow.txt", "w+");
    if(f == NULL)
    {
        printf("warrning");
    }
    for(int l=0; l<size+repeats; l++)
    {
        fprintf(f, "%f", array[l]);
    }

}

int main(int argc, char const *argv[])
{
    float array[]={1.1,1.2,1.3,1.4,1.5};
    duplicateRow(array, 5, 2, 3);
    
    for(int i=0; i<8; i++)
    {
        printf("%f", array[i]);
    }
    return 0;
}
