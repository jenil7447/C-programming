#include<stdio.h>
struct book
{
    char title[30];
    char author[30];
    char publication[40];
    float price;
};
void main()
{
    int i;
    struct book b[3];
    for(i=0;i<3;i++)
    {
    printf("\nEnter title of book %d : ",i+1);
    scanf("%s",b[i].title);
    printf("\nEnter name of author of book %d : ",i+1);
    scanf("%s",b[i].author);
    printf("\nEnter publication of book %d : ",i+1);
    scanf("%s",b[i].publication);
    printf("\nEnter price of book %d : ",i+1);
    scanf("%f",&b[i].price);
    }
    for(i=0;i<3;i++)
    {
    printf("\nTitle of book %d = %s",i+1,b[i].title);
    printf("\nAuthor of book %d = %s",i+1,b[i].author);
    printf("\nPublication of book %d = %s",i+1,b[i].publication);
    printf("\nPrice of book %d = %f",i+1,b[i].price);
    }
}
