#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int main()
{
    int final, vize;

    printf("Vize notu giriniz: \n");
    scanf("%d", &vize);

    printf("Final notu giriniz: \n");
    scanf("%d", &final);

    float gecme_notu = (vize * 0.3) + (final * 0.7);

    if (gecme_notu < 50) {
        printf("Kaldiniz. Not: %.2f, harf notu FF", gecme_notu);
    }
    else if ((gecme_notu < 60) && (gecme_notu >= 50)) {
        printf("Gecme Notu: %.2f, harf notu CC", gecme_notu);
    }
    else if ((gecme_notu < 70) && (gecme_notu >= 60)) {
        printf("Gecme Notu: %.2f, harf notu CB", gecme_notu);
    }
    else if ((gecme_notu < 80) && (gecme_notu >= 70)) {
        printf("Gecme Notu: %.2f, harf notu BB", gecme_notu);
    }
    else if ((gecme_notu < 90) && (gecme_notu >= 80)) {
        printf("Gecme Notu: %.2f, harf notu BA", gecme_notu);
    }
    else if ((gecme_notu < 100) && (gecme_notu >= 90)) {
        printf("Gecme Notu: %.2f, harf notu AA", gecme_notu);
    }
    else {
        printf("Gecersiz not.");
    }
}

