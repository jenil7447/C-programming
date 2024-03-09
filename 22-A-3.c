#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr,n,sum=0,i;
    printf("Enter value of n : ");
    scanf("%d",&n);
    ptr = (int *)calloc(n,sizeof(int));
    printf("Enter values : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
        
    }
    for(i=0;i<n;i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("Sum = %d",sum);
    free(ptr);
}
