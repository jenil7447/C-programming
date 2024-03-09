#include<stdio.h>
void main()
{
    int *a,x;
    a = &x;
    printf("Enter value of x = ");
    scanf("%d",&x);
    printf("Value = %d\n Address = %d",x,a);
}
