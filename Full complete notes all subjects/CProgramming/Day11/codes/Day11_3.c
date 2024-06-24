#include<stdio.h>
void readArray( int *ptr); 
void printArray( int arr[]); 
int main()
{
    int arr[4] = {100,200,300,400}; 
    //arr++; // NOT OK  
    printArray(arr); 
    
    return 0;
}
//void printArray( int *ptr)//pointer notation 
void printArray( int arr[])//array notation 
{
      arr++;   
      printf("%d",*arr); //200  
      printf("%d ",arr[-1]); //100 ( value )
      /*    
              arr[-1]
              *(arr + -1)
              *(arr - 1)
              *(104 - 1 )
              *(104 - 1 * 4)
              *(104 - 4)
              *(100)
                100 
      */ 
      
}


