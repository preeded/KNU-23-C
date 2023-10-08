#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define R 1

int main()
{
    long double x, y;
    long long count = 0, circle = 0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 10000000; j++)
        {
            x = (long double)rand() / RAND_MAX;
            y = (long double)rand() / RAND_MAX;
            if (sqrtl(x * x + y * y) < R)
            {
                circle++;
            }
        }
        count += 10000000;
        printf("%d%%진행.. 원주율 : %Lf ", i + 1, 4 * (long double)circle / count);
        for (int j = 0; j < (i + 1)/5; j++)
        {
            printf("▶");
        }
        for (int j = 0; j < 20 - (i + 1)/5; j++)
        {
            printf("▷");
        }
        printf("\n");
    }
}
