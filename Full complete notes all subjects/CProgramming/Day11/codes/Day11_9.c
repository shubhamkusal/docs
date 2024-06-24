#include<stdio.h> 

int main( )
{
    const int num2 = 20; 
    const int num = 10; 
    const int * const ptr = &num;
    //int const * const ptr = &num;
    //const int const * const ptr = &num;
//ptr is a constant pointer pointing to const int variable     
    
    printf("num = %d",num); 
    printf("*ptr = %d",*ptr);

    // num = 20; // NOT OK 
    // *ptr = 20; // NOT OK
    // ptr = &num2; // NOT OK  
    
    return 0; 
}