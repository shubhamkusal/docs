#include<stdio.h>
void readArray( int arr[]); 
void printArray( int arr[]); 
int main()
{
    int arr[5]; 
    //arr++; // 100++ => 100 = 100 + 1 // NOT OK  
    printf("Enter the array elements"); 
    readArray(arr); // base address  
    printf("Array elements are :: \n"); 
    printArray(arr); 
    return 0;
}

void readArray( int arr[])//array notation 
{
    //printf("%d ",sizeof(arr)); // pointer size => 4 byte 
      int i; 
      for( i = 0 ; i < 5 ; i++)
            scanf("%d",&arr[i]);   
}

void printArray( int arr[])//array notation 
{
    
      int i; 
      for( i = 0 ; i < 5 ; i++)
            printf("%d",arr[i]);   
}

