#include<stdio.h>
void main()
{
    int i,*a,j,temp=0,n;
    printf("Enter value of n : ");
    scanf("%d",&n);
    int arr[n];
    a = arr;
    for(i=0;i<n;i++)
    {
        printf("Enter value of %d element = ",i);
        scanf("%d",&arr[i]);
        *(a+i) = arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(a+j)<*(a+i))
            {
                temp = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = temp;
            }
        }
    }
    printf("Sorted Array : \n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d] = %d \n",i,*(a+i));
    }
}
