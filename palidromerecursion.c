#include<stdio.h>
int reverse(int num);

void main()
{
    int num, reversenum;
    printf("Enter the number to check whether palindrome or not\n");
    scanf("%d", &num);
    printf("Entered number is %d and reverse num of it is %d\n", num, reverse(num));
    if (num == reverse(num))
        printf("Given number is a palindrome\n");
    else
        printf("Given number is not a palindrome\n");
}
int reverse(int num)
{
    static int sum=0;
    if (num != 0)
    {
        sum = sum * 10 + (num % 10);
        reverse(num/10);
    }
    else 
        return sum;

}