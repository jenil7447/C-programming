#include<stdio.h>
void main()
{
    int n,i,pos=0,neg=0;
    printf("Enter Total number of Asteroids : ");
    scanf("%d",&n);
    int asteroids[n];
    for(i=0;i<n;i++)
    {
        printf("Enter Asteroid %d : ",i+1);
        scanf("%d",&asteroids[i]);
    }
    for(i=0;i<n;i++)
    {
        if(asteroids[i]>0)
        {
            pos += asteroids[i];
        }
        else
        {
            neg += asteroids[i];
        }
    }
    if(pos>neg)
    {
        printf("Asteroids");
        for(i=0;i<n;i++)
        {
            if(asteroids[i]>0)
            {
                printf("[%d]",asteroids[i]);
            }
        }
    }
    else if(pos<neg)
    {
        printf("Asteroids");
        for(i=0;i<n;i++)
        {
            if(asteroids[i]<0)
            {
                printf("[%d]",asteroids[i]);
            }
        }
    }
    else
    {
        printf("Nothing left");
    }
}
