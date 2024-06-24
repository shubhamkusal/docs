#include<stdio.h> 

int main( )
{
    // int a = 1;
    // int b = 2; 
    // printf("%d %d",a,b); // 1 2  
    
    int a = 10; 
    int *ptr = &a; 

    //printf("%d %d",a,++*ptr); 
    
    //calling convention ( CDECL )

    printf("%d %d",printf("Hello"),printf("world")); 
    return 0; 
}