#include <stdio.h>

void main() 
{
   int a,b,hcf,lcm,i=1,j=1;
   printf("Enter small number : ");
   scanf("%d",&a);
   printf("Enter large number : ");
   scanf("%d",&b);
   while(i<=a)
   {
       if((a%i == 0) && (b%i == 0))
       {
            hcf = i;
       }
       i++;
   }
   while(j<=a)
   {
       if(b%a==0)
       {
           lcm = b;
       }
       else if(a%j==0 && b%j==0)
       {
           lcm = (a*b)/j;
       }
       j++;
   }
   printf("HCF = %d \n",hcf);
   printf("LCM = %d",lcm);
}
