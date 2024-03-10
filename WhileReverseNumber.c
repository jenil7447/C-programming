#include <stdio.h>
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Reverse number : ");
    while(n!=0)
    {
        printf("%d",n%10);
        n/=10;
    }
}
