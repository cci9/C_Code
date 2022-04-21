#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    int num, quo, i = 2, primecheck = 0, sum, numor;
    printf("Enter a num whose prime factors need to find:");
    scanf("%d", &num);
    numor=num;
    while (num % 2 == 0)
    {
        sum = sum + 2;
        quo = num / 2;
        num = num / 2;
    }
    i = 3;
    while (i <= sqrt(num))
    {
        if (num % i == 0)
        {
            sum = sum + i;
            quo = num / i;
            num = num / i;
            i = 3;
        }
        else
            i = i + 2;
    }
    if (quo > 1)
        sum = sum + quo;

    if (sum==numor)
        printf("Given num = %d and sum of factors = %d hence PERFECT num", numor, sum);
    else
        printf("Given num = %d and sum of factors = %d hence not a PERFECT num", numor, sum);
}