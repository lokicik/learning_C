#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14
#include <iostream>
#include <math.h>

int main() {
    printf("Yari capi giriniz: \n");
    float r;
    scanf("%f", &r);
    float alan = 2 * PI * r;
    float cevre = PI * pow(r, 2);
    printf("%f yari capli bir dairenin,\nALANI=%f\nCEVRESI=%f\n", r, alan, cevre);

    return 0;
}