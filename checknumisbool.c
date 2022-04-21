#include<stdio.h>

int main()
{
    int num;
    printf("Enter number to check wtheteher it can be bool or not:\n");
    scanf("%d", &num);
    while (num>0)
    {
        int rem = num % 10;
        if (rem == 0 | rem == 1)
        {
            num = num / 10;
        }
        else
        {
            printf("The number contains other than 1 and 0 digits hence cannot be boolean\n");
            break;
        }
    }
    if (num == 0)
        printf("Entered number contains 1 and 0 digits hence can be boolean\n");

    return 0;

}