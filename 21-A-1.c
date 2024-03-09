#include<stdio.h>
#include<stdlib.h>
void main()
{
   FILE *f;
   char ch[50];
 
   f = fopen("file.txt","w");
   printf("Enter data : ");
    gets(ch);

   fprintf(f,"%s",ch);
    printf("File opened successfully.\n");
   fclose(f);
   printf("File closed Successfully");
}
