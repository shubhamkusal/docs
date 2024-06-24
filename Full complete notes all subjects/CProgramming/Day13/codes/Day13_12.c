#include<stdio.h> 
#include<stdlib.h> 

int main( )
{
    //heap section 
    //void* malloc(size_t size);  
    float *ptr; 
    ptr=(float*)malloc(sizeof(float)); //Request 
    if(ptr == NULL)//check 
    {
        printf("Memory not allocated"); 
        exit(1); 
    }
    *ptr = 11.33; //use 
    printf("%.2f",*ptr);

    free(ptr); // To avoid memory leakage 

    ptr = NULL; // To avoid dangling pointer   
    
    return 0; 
}