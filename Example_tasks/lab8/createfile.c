#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    // Utworzenie pliku tekstowego
    FILE *out1, *out2 ;
    out1 = fopen("files/file1.txt" , "w" ) ;
    fclose(out1);

    // Utworzenie pliku binarnego
    out2 = fopen("files/file1.exe", "wb");
    fclose(out2);
    return 0;
}
