#include <stdio.h>
void main()
{
    int n,sum=0,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(i<n)
    {
        if(n%i==0)
        {
            sum = sum + i;
        }
        i++;
    }
    if(sum == n)
    {
        printf("Number is Perfect");
    }
    else
    {
        printf("Number is not Perfect");
    }
}
