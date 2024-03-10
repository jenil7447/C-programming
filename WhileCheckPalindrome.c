#include <stdio.h>
void main()
{
    int i,n,rev=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    i=n;
    while(n!=0)
    {
        rev = rev*10 + n%10;
        n/=10;
        
    }
    if(i==rev)
    {
        printf("%d is a Palindrome",i);
    }
    else
    {
        printf("%d is not Palindrome",i);
    }
}
