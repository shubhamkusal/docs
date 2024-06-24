#include<stdio.h> 
#include<limits.h> 

int main( )
{
    /*  
        type modifier 
        signed 
        unsigned 
        short 
        long 
    */
    int num = 2147483647;
    // by default it is considered as signed  
    
    /*
            int => 4 bytes => 32 bits 
            1 bit => sign 
            ( 2 to the power 32 - 1 ) - 1 
            ( 2 to the power 31) - 1 

    */
    //printf("%d",num); //
    //printf("%d ",INT_MAX); //2147483647
    //printf("%d",INT_MIN); //-2147483648
     unsigned int num1 = 4294967295; // only positive  

     /*
            int => 4 bytes => 32 bits 
            1 bit => sign 
            ( 2 to the power 32  ) - 1 
            

    */
   // %u => unsigned 
    printf("%u ",UINT_MAX); //4294967295 
    return 0; 
}