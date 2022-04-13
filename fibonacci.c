#include<stdio.h>

void main()
{
    int num;
    printf("Enter how many numbers of fibonacci need to show:\n");
    scanf("%d", &num);
    int i = 0, j = 1;
    printf("The fibonacci series sequence is\n");
    printf("%d\t%d\t", i, j);
    int k=0, sum =0;
    while (k < (num - 2))
    {
        sum = i + j;
        printf("%d\t", sum);
        i = j;
        j = sum;
        k++;
    }
}