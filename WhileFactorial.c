#include <stdio.h>
void main() 
{
    int fact=1,i=1,n;
    printf("Enter the number to find its factorial : ");
    scanf("%d",&n);
    while(i<=n)
    {
        fact = fact*i;
        i++;
    }
    printf("Factorial = %d",fact);
    
}
