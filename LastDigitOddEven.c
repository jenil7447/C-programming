#include <stdio.h>

void main()
{
    int a;
    printf("Enter an integer : ");
    scanf("%d",&a);
    if((a%10)%2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}
