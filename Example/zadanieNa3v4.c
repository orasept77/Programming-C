#include <stdio.h>
#include <string.h>

int compare(char word1[], char word2[], int length) {
    int difference = 0;

    for (int i=0; i<length; i++) {
        if (word1[i] != word2[i]) {
            difference++;
        }
    }

    return difference;
}

int main(void) {
    char word1[] = {'h', 'e', 'l', 'l', 'o'};
    char word2[] = {'h', 'b', 'x', 'l', 'y'};
    int length = 5;

    int difference = compare(word1, word2, length);

    printf("Difference: %d\n", difference);

    return 0;
}