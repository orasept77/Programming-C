#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countcharacters(char zdanie[])
{
    int cyfry = 0;
    int litery = 0;
    int znakiSpe = 0;
    int i;
    printf("Dlugosc zdania wynosi: %i \n", strlen(zdanie));
    for (i = 0; i < strlen(zdanie); i++)
    {
        if ((zdanie[i] == '0') || (zdanie[i] == '1') || (zdanie[i] == '2') || (zdanie[i] == '3') || (zdanie[i] == '4') || (zdanie[i] == '5') || (zdanie[i] == '6') || (zdanie[i] == '7') || (zdanie[i] == '8') || (zdanie[i] == '9'))
        {
            cyfry += 1;
        }
        char z = zdanie[i];
        if ((z == 'Z') || (z == 'z') || (z == 'Y') || (z == 'y') || (z == 'X') || (z == 'x') || (z == 'W') || (z == 'w') || (z == 'V') || (z == 'v') || (z == 'U') || (z == 'u') || (z == 'T') || (z == 't') || (z == 'S') || (z == 's') || (z == 'R') || (z == 'r') || (z == 'Q') || (z == 'q') || (z == 'P') || (z == 'p') || (z == 'O') || (z == 'o') || (z == 'N') || (z == 'n') || (z == 'M') || (z == 'm') || (z == 'L') || (z == 'l') || (z == 'K') || (z == 'k') || (z == 'J') || (z == 'j') || (z == 'I') || (z == 'i') || (z == 'H') || (z == 'h') || (z == 'G') || (z == 'g') || (z == 'F') || (z == 'f') || (z == 'E') || (z == 'e') || (z == 'D') || (z == 'd') || (z == 'C') || (z == 'c') || (z == 'B') || (z == 'b') || (z == 'A') || (z == 'a'))
        {
            litery += 1;
        }
    }
    znakiSpe = strlen(zdanie) - cyfry - litery;
    printf("W podanym ciagu znakow jest %i cyfr\n", cyfry);
    printf("W podanym ciagu znakow jest %i liter\n", litery);
    printf("W podanym ciagu znakow jest %i znakow specialnych\n", znakiSpe);
    return 0;
}

int main()
{
    char zdanie[200];
    printf("Podaj ciag znakow: ");
    scanf("%[^\n]", zdanie);
    countcharacters(zdanie);
    return 0;
}