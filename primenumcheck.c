#include <stdio.h>

int main()
{
    int num = 0;
    printf("Enter the number to check for prime or not:\n");
    scanf("%d", &num);
    int i=2;
    while (i <= (num/2))
    {
        if (num % i == 0)
        {
            i = 0;
            break;
        }
        else
        {
            i++;
        }
    }
    if (i==0)
        printf("%d is not a prime number\n", num);
    else
        printf("%d is a prime number\n", num);
}