#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
    int v, j=1;
    scanf("%d", &v);
    printf("%d층 피라미드\n", v);
    for (int i = 0; i < v; i++) {
        for (int l = 0; l < v - 1 - i; l++) {
            printf(" ");
        }
        for (int k = 0; k < j; k++) {
            printf("*");
        }
        printf("\n");
        j += 2;
    }
}
