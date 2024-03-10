#include <stdio.h>
void main() 
{
    int a,b;
    printf("Enter 2 numbers : ");
    scanf("%d %d",&a,&b);
    while(a%2==0)
    {
        printf("Even number = %d",a);
        a++;
    }
    while(b%2==0)
    {
        printf("Even number = %d",b);
        b++;
    }
}
