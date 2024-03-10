#include <stdio.h>

void main() 
{
    int a,b,c;
    printf("Enter value of first integer : ");
    scanf("%d",&a);
    printf("Enter value of second integer : ");
    scanf("%d",&b);
    printf("Enter value of third integer : ");
    scanf("%d",&c);
    if(a>b)
    {
        if(b>c)
        {
            printf("Second Largest Integer = %d",b);
        }
        else if(c>b && a>c)
        {
            printf("Second Largest Integer = %d",c);
        }
    }
    else if(b>c)
    {
        if(c>a)
        {
            printf("Second Largest Integer = %d",c);
        }
        else if(a>c && b>a)
        {
            printf("Second Largest Integer = %d",a);
        }
    }
    else if(c>a)
    {
        if(a>b)
        {
            printf("Second Largest Integer = %d",a);
        }
        else if(b>a && c>b)
        {
            printf("Second Largest Integer = %d",b);
        }
    }
    
}
