#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

void sirala(int s1, int s2, int* sonuc1, int* sonuc2)
{
    if (s1 > s2) {
        int temp = s1;
        s1 = s2;
        s2 = temp;
    }
    *sonuc1 = s1;
    *sonuc2 = s2;
}
// s1, s2 = some_func(x1, x2)

int asal_mi(int sayi) {
    int i, sonuc;
    for (i = 2;i < sayi;i++) {
        if (sayi % i == 1)
            sonuc = 1;
        else if (sayi % i == 0) {
            sonuc = 0;
            break;
        }
    }
    if (sonuc == 1)
        return 1;
    else return 0;
}

long long asal_dondur(int s1, int s2) {
    int sayi1, sayi2;

    sirala(s1, s2, &sayi1, &sayi2);
    int j, sayac = 0;

    for (j = sayi1; j <= sayi2; j++) {
        if (asal_mi(j) == 1)
            sayac++;
    }
    return sayac;
}
int main() {
    int s1, s2;
    printf("Sayi1 giriniz: ");
    scanf("%d", &s1);
    printf("Sayi2 giriniz: ");
    scanf("%d", &s2);

    int sayi1, sayi2;

    sirala(s1, s2, &sayi1, &sayi2);

    int a = asal_dondur(sayi1, sayi2);
    printf("%d ile %d arasinda %d adet asal sayi var", sayi1, sayi2, asal_dondur(sayi1, sayi2));
    return 0;

}