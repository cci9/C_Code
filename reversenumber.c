#include<stdio.h>

int numrev(int num)
{
    int numrev=0;
    while (num > 0) // 656 65 
    {
        numrev = numrev*10 + (num % 10);// 6 65 656
        num = num / 10; //65 6 0 
    }
    return numrev;
}
void main()
{
    int num;
    printf("Enter the number for reverse: \n");
    scanf("%d",&num);
    printf("Entered number for reverse is: %d\n", num);//656
    printf("Reverse of entered number is: %d\n", numrev(num));
    if (num == numrev(num))
        printf("Given number is a PALINDROME\n");
    else
        printf("Given number is not a PALINDROME");
}

