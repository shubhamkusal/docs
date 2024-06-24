#include<stdio.h> 
int main()
{
    int num2 = 20; 
    int num = 10; 
    int * const ptr = &num;// OK  
    //ptr = &num; // NOT OK 
    //int *  ptr const = &num; // NOT OK  
 //ptr is const pointer pointing to non const int variable    
    
    printf("num = %d",num); //10 
    printf("*ptr = %d",*ptr); //10 

    *ptr = 20; 
    
    printf("\n num = %d",num); //20 
    printf("*ptr = %d",*ptr); //20 

    //ptr = &num2; // NOT OK  
    return 0;
}


