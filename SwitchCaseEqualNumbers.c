#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter value of first integer : ");
    scanf("%d",&a);
    printf("Enter value of second integer : ");
    scanf("%d",&b);
    switch(a^b)
    {
        case 0:
        printf("Both numbers are equal");
        break;
        default:
        printf("Both numbers are not equal");
        break;
    }
}
