#include<stdio.h>
void main()
{
    int n,i,target,j;
    printf("Enter Total number of Integers : ");
    scanf("%d",&n);
    int nums[n];
    printf("Enter a Target : ");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        printf("Enter value of %d element : ",i);
        scanf("%d",&nums[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(target == nums[i] + nums[j])
            {
                printf(" %d %d",nums[i],nums[j]);
            }
        }
    }
}
