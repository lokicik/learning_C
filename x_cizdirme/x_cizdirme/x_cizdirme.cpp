#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>

int main() {
    int satir;
    printf("Satir sayisini giriniz: ");
    scanf("%d", &satir);

    if (satir % 2 == 0) {
        for (int i = 1; i <= satir; i++) {
            for (int j = 1; j <= satir; j++) {
                if (j == i || j == satir - i + 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }

    }


    if (satir % 2 == 1) {
        for (int i = 1; i <= satir; i++) {
            for (int j = 1; j <= satir; j++) {
                if (j == i || j == satir - i + 1)
                    printf("*");
                else
                    printf(" ");
            }
            printf("\n");
        }
    }


    return 0;
}