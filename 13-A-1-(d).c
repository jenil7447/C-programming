#include<stdio.h>
void main()
{
    int i,j,k;
    for(i=0;i<=5;i++)
    {
        for(j=5;j>=i+1;j--)
        {
            printf(" ");
        }
        for(k=1;k<=j;k++)
        {
            printf("  %d ",k);
        }
        printf("\n");
    }
}
