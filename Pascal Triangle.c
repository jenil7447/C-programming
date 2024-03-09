//PASCAL TRIANGLE
#include<stdio.h>
int fact(int);
void main()
{
    int i,j,n,ncr;
    printf("Enter vaiue of n : ");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=n;j>=i;j--)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            ncr = fact(i)/(fact(j)*fact(i-j));
            printf("%d ",ncr);
        }
        printf("\n");
    }
}
int fact(int f)
{
    if(f==0)
    {
        return 1;
    }
    else
    {
        return f*fact(f-1);
    }
}
