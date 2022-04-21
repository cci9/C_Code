#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main()
{
    int num, quo, i = 2, primecheck=0;
    printf("Enter a num whose prime factors need to find:");
    scanf("%d", &num);
    while (i <= sqrt(num))
    {
        if (num % i == 0)
        {
            primecheck=1;
            break;
        }
        i=i+1;
    }
    if (primecheck==0)
        printf("%d", num);
    else
    {
        while (num % 2 == 0)
        {
            printf("%d\t", 2);
            quo = num / 2;
            num = num / 2;
        }
        i=3;
        while (i <= sqrt(num))
        {
            if (num % i == 0)
            {
                printf("%d\t", i);
                quo = num / i;
                num = num / i;
                i = 3;
            }
            else
                i = i + 2;
        }
        if (quo > 1)
            printf("%d", quo);
    }

}