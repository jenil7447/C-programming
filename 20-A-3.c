#include<stdio.h>
struct name_struct
{
    char c[9];
    int id1;
    int id2;
    double d;
}s;
union name_union
{
    char c[9];
    int id1;
    int id2;
    double d;
}u;
void main()
{
    printf("Size of Structure = %d",sizeof(s));
    printf("\nSize of Union = %d",sizeof(u));
}

