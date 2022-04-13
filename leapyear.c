#include<stdio.h>

int main()
{
    int year;
    printf("Enter year :\n");
    scanf("%i", &year);
    printf("Entered year is : %i\n", year);
    if (year % 400 == 0)
        printf("This is a Leap Year by 400 check\n");
    else if ((year % 4 == 0) && (year % 100 != 0))
        printf("This is a Leap Year by 4 and 100 check\n");
    else
        printf("This is a not a Leap Year\n");
    return 0;
    
}