#include <stdio.h>
void main() 
{
    int i=1,count=0,a;
    while(i<=10)
    {
        printf("Enter a number : ");
        scanf("%d",&a); 
        if(a%2==0)
        {
            count = count+1;
        }
        
        i++;
    }
    printf("Even numbers = %d \n Odd numbers = %d",count,10-count);

}
