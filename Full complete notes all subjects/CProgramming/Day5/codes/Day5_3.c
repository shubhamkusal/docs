#include<stdio.h> 
int main()
{
    //sizeof() is evaluated at compile time 
    int x = 1; 
    int num; 
    char ch; 
    double d1; 
    short int s1; 
    // printf("%d ",sizeof(10 + 2)); //4 bytes 
    // printf("%d ",sizeof(num + ch + d1)); //8 bytes 
    // printf("%d ",sizeof(10.22 + 'A')); //8 bytes
    // printf("%d ",sizeof(10.22f + 2)); //4 bytes
    // printf("%d ",sizeof(s1 + ch)); //int=>4 bytes   
    
    printf("%d ",sizeof(x + 1)); //4 byte 
    printf("%d ",x); //1 
    
    return 0;
}
