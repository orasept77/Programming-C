#include <stdio.h>
#include <stdlib.h>

char* filetoarray(char *path) 
{
  FILE *file;
  char *buffer;
  long size;
  
  file = fopen(path, "rb");
  if (!file) {
    fprintf(stderr, "Nie można otworzyć pliku %s\n", path);
    return NULL;
  }
  
  fseek(file, 0, SEEK_END);
  size = ftell(file);
  rewind(file);
  
  buffer = malloc(size);
  if (!buffer) {
    fprintf(stderr, "Nie można alokować pamięci!\n");
    fclose(file);
    return NULL;
  }
  
  if (fread(buffer, size, 1, file) != 1) {
    fprintf(stderr, "Błąd podczas wczytywania pliku!\n");
    fclose(file);
    free(buffer);
    return NULL;
  }
  
  fclose(file);
  
  return buffer;
}

int main(int argc, char **argv) 
{
  char *buffer;
  int i;
  
  buffer = filetoarray("file.txt");
  if (!buffer) {
    return 1;
  }
  
  printf("Zawartość pliku:\n");
  for (i = 0; i < strlen(buffer); i++) {
    printf("%c", buffer[i]);
  }
  printf("\n");
  
  free(buffer);
  
  return 0;
}