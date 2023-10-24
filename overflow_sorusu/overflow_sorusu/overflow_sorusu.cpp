#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int saniye, saat, dakika, kalanSaniye;

    printf("Saniyeyi girin: ");
    scanf("%llu", &saniye);

    saat = saniye / 3600;
    saniye %= 3600;
    dakika = saniye / 60;
    kalanSaniye = saniye % 60;

    printf("%llu saat %llu dakika %llu saniye\n", saat, dakika, kalanSaniye);

    // maksimum çıktı 
    // 1193046 saat 28 dakika 15 saniye
    // hatta 0'dan başladığı için 16 saniye diyebiliriz yoksa 2^32 - 1 çıkıyor
    // yalnızca long int kullanarak programı çalıştırdığımızda 2^32 - 1 değeri 
    // ve bunun 1 fazlası ya da 1 eksiği gibi aralarında küçük fark olan değerler
    // ekrana 0, 1, -1 gibi sayılar çıktılanıyor
    // long long int kullanıldığında düzgün çıktı veriyor

    unsigned long long int yeniSaat = 1193046, yeniDakika = 28, yeniSaniye = 16;

    printf("\nlong int maksimum ciktiyi bulma\ntoplam saniye: %llu\n", (yeniSaat * 3600) + (yeniDakika * 60) + yeniSaniye);
    // çıktısı: 4294967295 yani 2^32 - 1

    // maksimum çıktı
    // long long int'in de sınırlarını deneyince 
    // 5124095576030431 saat 0 dakika 15 saniye çıkıyor

    unsigned long long int yeniSaat2 = 5124095576030431, yeniDakika2 = 0, yeniSaniye2 = 15;
    printf("\nlong long int maksimum ciktiyi bulma\ntoplam saniye: %llu\n", (yeniSaat2 * 3600) + (yeniDakika2 * 60) + yeniSaniye2);
    // çıktısı: 18446744073709551615 yani 2^64 - 1

    // işlem yaparak daha 2^64'ten büyük sayılara ulaşmak da mümkünmüş
    unsigned long x = 4294967000;
    printf("%lu * %lu the result is %lu\n", x, x, x * x); // sonuç 87616, overflow oluyor
    printf("%lu * %lu the result is %llu\n", x, x, (unsigned long long) (x * x)); // sonuç 87616, overflow oluyor
    printf("%lu * %lu the result is %llu\n", x, x, (unsigned long long)x * x); // sonuç 18446741531089000000


    system("pause");
    return 0;

}

