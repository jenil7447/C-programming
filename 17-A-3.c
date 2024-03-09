#include<stdio.h>
void main()
{
    int *p1,*p2,a,b,sum;
    p1 = &a;
    p2 = &b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
    sum = *p1+*p2;
    printf("Sum = %d",sum);
}
