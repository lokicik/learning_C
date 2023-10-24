#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <time.h>

int main(){
    clock_t start, end;
    double cpu_time_used;
    int alinan, i;
    int index = 1;
    
    printf("Sayi giriniz: ");
    scanf("%d", &alinan);
    start = clock();

    for (i = 2; i < alinan; i++) {

        if (alinan % i == 0) {
            printf("Bolundu %d\n", i);
            index = 0;
        }
    }

    if (index == 0) {
        printf("Sayi asal degildir");
    } else {
        printf("Sayi asaldir");
    }

    end = clock();
    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nTime took: %f\n", cpu_time_used);
    system("Pause");
} 

