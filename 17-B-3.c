#include<stdio.h>
void main()
{
    int i,j,n,r,c;
    printf("Enter number of rows = ");
    scanf("%d",&r);
    printf("Enter number of columns = ");
    scanf("%d",&c);
    int a1[r][c],a2[r][c],sum[r][c],*p1[r][c],*p2[r][c],*ptr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter value of a1[%d][%d] = ",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("\nEnter value of a2[%d][%d] = ",i,j);
            scanf("%d",&a2[i][j]);
        }
    }
    printf("Add = \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            p1[i][j] = &a1[i][j];
            p2[i][j]= &a2[i][j];
            sum[i][j] = *p1[i][j]+ *p2[i][j];
            ptr[i][j] = &sum[i][j];
             printf("%d ",*ptr[i][j]);
        }
        printf("\n");
    }
}
