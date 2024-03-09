#include<stdio.h>
void main ()
{
   char name [20];
   int age, length;
   FILE *fp;
   fp = fopen ("test.txt","w");
   fprintf (fp, "%s %d", "Fresh2refresh", 5);
   length = ftell(fp);
   rewind (fp);
   fscanf (fp, "%d", &age);
   fscanf (fp, "%s", name);
   if (fp == NULL)
 
    do
    {
        // Taking input single character at a time
        char c = fgetc(fp);
 
        // Checking for end of file
        if (feof(fp))
            break ;
 
        printf("%c", c);
    }  while(1);
    fputc(age,fp);
   fclose (fp);
   printf ("Name: %s \n Age: %d \n",name,age);
   printf ("Total number of characters in file is %d", length);
}
