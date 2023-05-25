#include <stdio.h>
int main() {
    char c;
    printf("Wprowadz u aby wyswietlic duze litery.\n");
    printf("Wprowadz l aby wyswietlic male litery. \n");
    scanf("%c", &c);

    if (c == 'U' || c == 'u') {
        for (c = 'A'; c <= 'Z'; ++c)
            printf("%c ", c);
    } else if (c == 'L' || c == 'l') {
        for (c = 'a'; c <= 'z'; ++c)
            printf("%c ", c);
    } else {
        printf("Wprowadzono złą litere.");
    }

    return 0;
}

