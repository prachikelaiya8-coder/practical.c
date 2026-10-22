#include <stdio.h>

int main(void) {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int space = 1; space <= rows - i; space++) {
            printf("  ");
        }

        for (int star = 1; star <= i; star++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}