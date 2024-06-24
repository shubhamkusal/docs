#include<stdio.h> 

int main()
{
    int a = 10; 
    int *p = &a;

    printf("a = %d\n",a); 
    printf("*p = %d\n",*p);

    a = 20;
    printf("a = %d\n",a); 
    printf("*p = %d\n",*p);
    
    *p = 30; 
    printf("a = %d\n",a); 
    printf("*p = %d\n",*p);
     

    return 0; 
} 