#include<stdio.h> 

int main( )
{
    // = (assignment opr)
    int x; 
    x = 1; //assignment 
    //x + 1;  
    //x = x + 1;  
    //2 = 3; // lvalue error   
    //2 + 1 = 3;  
    //x = 2 + 1;  
    //printf("%d",x); //1   
    
    int a = 1; 
    int b = 2; 

    printf("%d ",a); // 1 
    printf("%d ",a=b);// 2  
    printf("%d ",a); // 2  
    
    return 0; 
}