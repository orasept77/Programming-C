#include <stdio.h>

int main(void)
{
    FILE *fp;
    char buff[255];

    fp = fopen("txt1.txt", "r");
    while(fgets(buff, 255, fp) != NULL) {
        printf("%s", buff);
    }

    fclose(fp);

    return 0;
}