#include<stdio.h>

void main()
{
    int num, i;
    printf("Enter a number to cehck boolean or not\n");
    scanf("%d", num);
    while (num > 0)
    {
        i = num % 10;
        if (i != 0 && i != 1)
        {
            printf("Given number is not a binary number\n");
            break;
        } 
        num = num / 10;
        if (num == 0)
        {
            printf("Given number is a binary number");
        }
    }
}