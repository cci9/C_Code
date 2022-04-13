#include<stdio.h>

int recursion(int numval)
{
    static int i = 0, j = 1, sum;
    if (numval == 0)
        return 0;
    else
    {
        sum = i + j;
        printf("%d\t", sum);
        i = j;
        j = sum;
        recursion(numval - 1);
    }
}

void main()
{
    int num;
    printf("Enter how many numbers of fibonacci need to show:\n");
    scanf("%d", &num);
    if (num <= 0)
    {
        printf("Please enter valid number for fibonacci series.");
    }
    else if (num == 1)
    {
        int i = 0;
        printf("The fibonacci series sequence is: %d", i);
    }
    else if (num == 2)
    {
        int i = 0, j = 1;
        printf("The fibonacci series sequence is: %d\t%d\t", i, j);
    }
    else
    {
        int i = 0, j = 1;
        printf("The fibonacci series sequence is: %d\t%d\t", i, j);
        recursion(num - 2);
    }
    
}