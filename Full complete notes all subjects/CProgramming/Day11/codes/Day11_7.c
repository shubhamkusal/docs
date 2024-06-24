#include<stdio.h> 

int main( )
{
    const int num = 10; 
    const int num2 = 20; 
    const int *ptr = &num;  
    //int const *ptr = &num;  
    //const int const *ptr = &num;  
//ptr is a non constant pointer storing the address of const int variable     
    
    printf("num = %d",num); //10 
    printf("*ptr = %d",*ptr); //10 

    //*ptr = 200; // NOT OK 
    ptr = &num2; // OK 
    return 0; 
}