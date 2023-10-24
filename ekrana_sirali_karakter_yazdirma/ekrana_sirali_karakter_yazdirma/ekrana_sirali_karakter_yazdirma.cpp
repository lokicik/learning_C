#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include <stdio.h>
#include <string.h>


void reverseString(char str[]) {
    int len = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = len - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    int satir, i, j, k;

    printf("Satir sayisini giriniz: ");
    scanf("%d", &satir);

    for (i = 1; i <= satir; i++) {
        for (j = 0; j <= satir - i; j++) {
            printf(" ");
        }

           printf(" ");

 
        if (i == (satir)) {
            printf("\b");
        }

        for (j = i; j >= 1; j--) {
            char d[5];
            sprintf(d, "%d", j);
            
            printf("%s", d);
        }

        for (j = 2; j <= i; j++) {
            char c[5];
            sprintf(c, "%d", j);
            reverseString(c);
            printf("%s", c);
        }
        printf("\n");
    }

    for (k = satir - 1; k >= 1; k--) {
        for (j = 0; j <= satir - k; j++) {
            printf(" ");
        }
   
            printf(" ");
       

        for (j = k; j >= 1; j--) {
            char b[5];
            sprintf(b, "%d", j);
            
            printf("%s", b);
        }

        for (j = 2; j <= k; j++) {
            char a[5];
            sprintf(a, "%d", j);
            reverseString(a);
            printf("%s", a);
        }
        printf("\n");

    }
    
   
}
