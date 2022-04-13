#include<stdio.h>

void main()
{
    int a, b, c;
    printf("Enter the three integers\n");
    scanf("%d%d%d", &a, &b, &c);
    int max = a;
    if (a< b)
        max = b;
    if (max < c)
        max = c;
    printf("The max integer is %d from %d, %d, and %d", max, a, b, c);
}