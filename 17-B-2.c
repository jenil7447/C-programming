#include<stdio.h>
void main()
{
    int i,n,*ptr;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr1[n],arr2[n];
    ptr = arr1;
    printf("Array 1 : ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter value of %d element = ",i);
        scanf("%d",&arr1[i]);
    }
    printf("\nArray 2 : ");
    for(i=0;i<n;i++)
    {
        printf("\nEnter value of %d element = ",i);
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n;i++)
    {
        *(ptr+i) = arr1[i];
        arr1[i] = arr2[i];
        arr1[i] = *(ptr+i);
        
    }
    printf("After swapping : ");
    printf("\nArray 1 : ");
    for(i=0;i<n;i++)
    {
        printf("\n Value of %d element of array 1 = %d ",i,arr1[i]);
    }
    printf("\nArray 2 : ");
    for(i=0;i<n;i++)
    {
        printf("\n Value of %d element of array 2 = %d ",i,arr2[i]);
    }
    
}
