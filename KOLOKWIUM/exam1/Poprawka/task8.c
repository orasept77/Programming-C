#include <stdio.h>

int findCharPosition(char *string, char character) {
  int i = 0;
  while (*string != '\0'){
    if (*string == character) {
      return i;
    }
    string++;
    i++;
  }
  return -1;
}

int main(void) {
  int position;

  position = findCharPosition("Floccinaucinihilipilification", 'n');
  printf("Position of 'n' in 'Floccinaucinihilipilification': %d\n", position);

  position = findCharPosition("Antidisestablishmentarianism", 'm');
  printf("Position of 'm' in 'Antidisestablishmentarianism': %d\n", position);

  position = findCharPosition("Honorificabilitudinitatibus", 'z');
  printf("Position of 'z' in 'Honorificabilitudinitatibus': %d\n", position);

  position = findCharPosition("Kowalski", 'w');
  printf("Position of 'w' in 'Kowalski': %d\n", position);

  position = findCharPosition("Kowalski", 'z');
  printf("Position of 'z' in 'Kowalski': %d\n", position);

  position = findCharPosition("Kowalski", 'K');
  printf("Position of 'K' in 'Kowalski': %d\n", position);

  return 0;
}