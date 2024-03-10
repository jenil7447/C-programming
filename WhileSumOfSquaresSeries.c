#include <stdio.h>
#include<math.h>
//Sum of Series of square of numbers
void main() 
{
    int i=1,n,sum=0;
    printf("Series = 1+4+9+... \n");
    printf("Enter the number of terms : ");
    scanf("%d",&n);
    
    while(i<=n)
    {
        printf("%d + ",i*i);
        sum = sum + i*i;
        i++;
    }
    printf(" = %d",sum);
}
