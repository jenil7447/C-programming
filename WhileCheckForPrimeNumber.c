#include <stdio.h>

void main()
{
    int i=1,n,count=0;
    printf("Enter a Number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        if(n%i==0)
        {
            count = count + 1;
        }
        i++;
    }
    if(count == 2)
    {
        printf("Number is Prime");
    }
    else
    {
        printf("Number is not prime");
    }
}
