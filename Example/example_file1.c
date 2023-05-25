#include <stdio.h>
#include <stdlib.h>

void duplicateRow(float *array, int size, int index, int count){
  if(size < index+count){
    printf("Warning: Elements exceded size od array!\n");
    return;
  }
  int i;
  for(i = 0; i < count; i++){
    array[size+i] = array[index];
  }
  
  FILE *fp;

    fp = fopen("data.txt", "w+");
    if(fp == NULL) {
      printf("Error while opening the file.\n");
      exit(EXIT_FAILURE);
    }

    for(i = 0; i < size+count; i++){
      fprintf(fp, "%f\n", array[i]);
    }

    fclose(fp);
}

int main(){
  float array[] = {1.2, 3.4, 5.6, 7.8};
  duplicateRow(array, 4, 1, 2);
  return 0;
}