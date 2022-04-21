#include<stdio.h>

void main()
{
    int a = 5, k =2;
    int set, clear, toggle;
    set = a | (1 << (k - 1));
    printf("a = %d and set = %d\n", a, set);
    k=3;
    clear = a & ~(1 << (k - 1));
    printf("a = %d and clear = %d\n", a, clear);
    k =2;
    toggle = a ^ (1 << (k - 1));
    printf("a = %d and toggle = %d\n", a, toggle);
}