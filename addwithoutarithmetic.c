#include<stdio.h>

void main()
{
    int a, b;
    printf("Enter two number for sum:\n");
    scanf("%d%d", &a, &b);
    int i=1;
    do
    {
        a++;
        i++;
    } while (i <= b);
    
    printf("Sum of above two numbers is is %d", a);
}