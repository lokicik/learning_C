#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
    float boy, kilo;
    printf("Kilonuzu giriniz (kg): ");
    scanf("%f", &kilo);

    printf("Boyunuzu giriniz (cm): ");
    scanf("%f", &boy);

    float result = kilo / ((boy * boy) / 10000);
    printf("Vucut kitle indeksiniz: %f", result);
    return 0;
}

