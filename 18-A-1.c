#include<stdio.h>
void add(int,int);
void main()
{
    int a,b;
    printf("Enter integer 1 : ");
    scanf("%d",&a);
    printf("Enter integer 2 : ");
    scanf("%d",&b);
    add(a,b);
}
void add(int a,int b)
{
    
    printf("Sum = %d",a+b);
    
}
