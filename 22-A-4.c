#include<stdio.h>
#include<stdlib.h>
struct name
{
    int i;   
};
void main()
{
    struct name *ptr;
    int n,j;
    printf("Enter value of n : ");
    scanf("%d",&n);
    ptr = (struct name *)calloc(n,sizeof(struct name));
    printf("Enter integers : ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&(ptr + j)->i);
    }
    for(j=0;j<n;j++)
    {
     printf("\nValue = %d",(ptr + j)->i);   
    }
    free(ptr);
}
