#include<stdlib.h>
#include<math.h>

int armstrongcheck(int num)
{
    int sum=0, count = 0, temp=num;
    while (temp != 0)
    {
        temp = temp / 10;
        count++;
    }
    if (count == 3)
    {
        while (num != 0)
        {
            sum = sum + pow((num%10),3);
            num = num / 10;
        }
        return sum;
    }
    return 0;
}
void main()
{
    int num=0, armstrongcheckval=0;
    printf("Enter the number to check as Armstrong or not:\n");
    scanf("%d",&num);
    armstrongcheckval=armstrongcheck(num);
    if (armstrongcheckval==0)
        printf("Not applicable for Armstrong check as number of digits are not equal to three\n");
    else if (num == armstrongcheckval)
        printf("Entered number is %d and Armstromg check number is %d. This is a ARMSTRONG number\n", num, armstrongcheckval);
    else
        printf("Entered number is %d and Armstromg check number is %d. This is not a ARMSTRONG number\n", num, armstrongcheckval);
}