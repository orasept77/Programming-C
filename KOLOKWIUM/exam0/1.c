#include <stdio.h>

int count_nonzeros(int* tab, int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (tab[i] != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int data[10] = {0, 8, 0, 7, 0, 6, 0, 5, 0, 4};
    printf("%d\n", count_nonzeros(data, 10));
    return 0;
}
