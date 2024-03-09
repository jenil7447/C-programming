#include<stdio.h>
void main()
{
    int *p1,*p2,a,b,temp;
    p1 = &a;
    p2 = &b;
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);
     temp = *p1;
     *p1 = *p2;
     *p2 = temp;
    printf("After swapping:\na = %d\nb = %d",a,b);
}
