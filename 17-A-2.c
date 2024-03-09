#include<stdio.h>
                                                                                
void main()                                                                     
{                                                                               
    char ch, *chp;                                                              
    int i, *ip;                                                                 
    float ff, *fp; 
    double d,*dp;
    printf("Enter character: ");                                                
    scanf("%c", &ch);                                                           
                                                                                
    printf("\nEnter integer: ");                                                
    scanf("%d", &i);                                                            
                                                                                
    printf("\nEnter float: ");                                                  
    scanf("%f", &ff);    
    
    printf("\nEnter double: ");
    scanf("%lf",&d);
                                                                                
    chp = &ch;                                                                  
    ip = &i;                                                                    
    fp = &ff;       
    dp = &d;
                                                                                
    printf("\nAddress contained in chp: %u", chp);                              
    printf("\nAddress contained in ip: %u", ip);                                
    printf("\nAddress contained in fp: %u", fp);                                
     printf("\nAddress contained in dp : %u", dp); 
                                                                                
    printf("\nValue of ch using chp pointer: %c", *chp);                        
    printf("\nValue of i using ip pointer: %d", *ip);                           
    printf("\nValue of ff using fp pointer: %f", *fp);
    printf("\nValue of d using fp pointer: %lf", *dp);
}
