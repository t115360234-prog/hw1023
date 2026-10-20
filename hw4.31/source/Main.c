#include <stdio.h>

int main(void) {
    int i, j;

    // --- 上半部 (前 5 行) ---
    for (i = 1; i <= 5; i++) {
        // 印空格
        for (j = 1; j <= 5 - i; j++) {
            printf(" ");
        }
        // 印星號
        for (j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // --- 下半部 (後 4 行) ---
    for (i = 1; i <= 4; i++) {
        // 印空格
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        // 印星號
        for (j = 1; j <= 9 - 2 * i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}