#include<stdio.h> 
//int arr[5]; // 0 
int main( )
{
    
    //array 
    int arr[5]={10,20,30,40,50};//init list 

    
    /*
        array index starts from 0 to n-1 
    arr 
        10   20   30   40   50  
        [0]  [1]  [2]  [3]  [4]  (index)
        100  104  108  112  116

     
     
    */ 
    
    int index; 
    for(index = 0 ; index < 5 ; index++)
                printf("%u ",&arr[index]); 

    //The array name is treated as address of 0th element in any runtime expression.
    // name of array represents the base address 
    
    printf("\n"); 

    printf("%u ",arr); //100 
    
    
    return 0; 
}

