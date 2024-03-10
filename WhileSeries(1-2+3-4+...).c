#include<stdio.h>
void main()
{
	int i=1,n,even=0,odd=0;
	printf("Series = 1-2+3-4....\n");
	printf("Enter last integer : ");
	scanf("%d",&n);
	while(i<=n)
	{
		if(i%2==0)
		{
			even = even + i;
			i++;
			
		}
		else if(i%2==1)
		{
			odd = odd + i;
			i++;
		}
	}
	printf("Sum of Series = %d",odd-even);
}
