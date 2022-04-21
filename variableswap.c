#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter number 1st and 2nd for swaping:\n");
    scanf("%d%d", &a, &b);
    printf("Entered number are %d and %d\n", a, b);
    a = a+b;
    b=a-b;
    a = a - b;
    printf("Entered number after swap are %d and %d", a, b);

}