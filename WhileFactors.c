#include <stdio.h>

void main() 
{
    int n,i=1;
    printf("Enter the Number : ");
    scanf("%d",&n);
    printf("Factors = ");
    while(i<=n)
    {
        if(n%i==0)
        {
            printf("%d ",i);
        }
        i++;
    }
}
