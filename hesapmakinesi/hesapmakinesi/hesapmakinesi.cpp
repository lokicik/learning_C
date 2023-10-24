#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    int giris;
    printf("Toplama icin '1'\nCikarma icin '2'\nCarpma icin '3'\nBolme icin '4'\n");
    scanf("%d", &giris);
    printf("Sectiginiz islem: '%d'\n", giris);

    float sayi1, sayi2;
    printf("Ilk sayiyi giriniz:\n");
    scanf("%f", &sayi1);

    printf("Ikinci sayiyi giriniz:\n");
    scanf("%f", &sayi2);

    if (giris == 1) {
        printf("sayi1: %f\nsayi2 : %f\nsayi1 + sayi2 = %f", sayi1, sayi2, sayi1 + sayi2);
    }
    else if (giris == 2) {
        printf("sayi1: %f\nsayi2 : %f\nsayi1 - sayi2 = %f", sayi1, sayi2, sayi1 - sayi2);
    }
    else if (giris == 3) {
        printf("sayi1: %f\nsayi2 : %f\nsayi1 * sayi2 = %f", sayi1, sayi2, sayi1 * sayi2);
    }
    else if (giris == 4) {
        if (sayi2 == 0) {
            printf("sayi1: %f\n sayi2 : %f\nBir sayi sifira bolunemez.", sayi1, sayi2, sayi1 * sayi2);
        }
        else {
        printf("sayi1: %f\nsayi2 : %f\nsayi1 / sayi2 = %f", sayi1, sayi2, sayi1 / sayi2);
        }
     
    }
    else {
        printf("Islem seciminiz gecersiz. Tekrar deneyin.");
    }
    return 0;
}

