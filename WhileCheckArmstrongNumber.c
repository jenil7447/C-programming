#include <math.h>
#include <stdio.h>

void main() {
   int num, originalNum, remainder, n = 0;
   float result = 0.0;
   printf("Enter an integer: ");
   scanf("%d", &num);
   originalNum = num;
   while (originalNum != 0) 
   {
       originalNum /= 10;
       ++n;
   }
    originalNum = num;
   while(originalNum != 0)
   {
       remainder = originalNum % 10;
       originalNum /= 10;
      result += pow(remainder, n);
   }

   if ((int)result == num)
   {
        printf("%d is an Armstrong number.", num);
   }
   else
   {
        printf("%d is not an Armstrong number.", num);
   }
}
