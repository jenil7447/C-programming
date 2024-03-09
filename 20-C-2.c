#include<stdio.h>
struct s
{
    int hh;
    int mm;
    int ss;
}t1,t2,t3;
void main()
{
    int m,s;
    printf("\nEnter Time 1 = ");
    scanf("%d %d %d",&t1.hh,&t1.mm,&t1.ss);
    printf("\nEnter Time 2 = ");
    scanf("%d %d %d",&t2.hh,&t2.mm,&t2.ss);
    t3.ss = t1.ss + t2.ss;
    t3.mm = t1.mm + t2.mm;
    t3.hh = t1.hh + t2.hh;
    m = t3.mm/60;
    s = t3.ss/60;
    if(t3.ss>=60)
    {
        t3.mm+=s;
        t3.ss-=60;
    }
    if(t3.mm>=60)
    {
        t3.hh+=m;
        t3.mm-=60;
    }
    printf("\nSum of Time = %d : %d : %d ",t3.hh,t3.mm,t3.ss);
}
