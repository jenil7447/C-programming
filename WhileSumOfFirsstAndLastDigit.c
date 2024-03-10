#include <stdio.h>

void main()
{
    int f,n,l,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    l = n%10;
    f = n;
    while(f>=10)
    {
        f = f/10;
        
    }
    sum = l + f;
    printf("Sum of First and Last digit = %d",sum);

}
