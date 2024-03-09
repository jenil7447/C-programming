#include<stdio.h>
void main()
{
    int i,n,*p;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int a[n],b[n];
    p = a;
    for(i=0;i<n;i++)
    {
        printf("\nEnter Value of %d element = ",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        *(p+i) = a[i];
        b[i] = *(p+i);
    }
    printf("After copying to another array : ");
    for(i=0;i<n;i++)
    {
        printf("\nValue of %d element = %d",i,b[i]);
    }
}
