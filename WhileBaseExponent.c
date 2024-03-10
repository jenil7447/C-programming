#include<stdio.h>
void main()
{
	int x,y,i=1,ans;
	printf("Enter Base : ");
	scanf("%d",&x);
	printf("Enter Exponent : ");
	scanf("%d",&y);
	ans=x;
	while(i<y)
	{
		ans = ans*x;
		i++;
	}
	printf("Answer = %d",ans);
}
