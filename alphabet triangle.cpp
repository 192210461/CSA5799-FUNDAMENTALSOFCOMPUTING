#include <stdio.h>

int main() {
    int i, j;
    char alphabet = 'A';

    for (i = 1; i <= 5; i++) { // Number of rows
        for (j = 1; j <= i; j++) { // Number of characters in each row
            printf("%c ", alphabet);
            alphabet++;
        }
        printf("\n");
    }
    return 0;
}
