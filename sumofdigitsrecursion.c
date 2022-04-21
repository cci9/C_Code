#include<stdio.h>

int sumdigit(int num)
{
    static int sum=0;
    if (num > 0)
    {
        sum = sum + (num % 10);
        num = num / 10;
        return sumdigit(num);
    }
    return sum;
}
int main()
{
    int num, sum;
    printf("Enter number to check its sum of digits:\n");
    scanf("%d", &num);
    printf("Entered number is %d and sum of ots digit is %d", num, sumdigit(num));
    return 0;
}