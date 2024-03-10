#include <stdio.h>
void main()
{
    int n,d,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Digits : ");
    while(i<n)
    {
        i*=10;
    }
    i/=10;
    while(n != 0)
    {
        int d = n /i;
        printf("%d,",d);
        if(d!=0)
          n=n-d*i;
        if(i!=1)
          i/=10;
    }
}
