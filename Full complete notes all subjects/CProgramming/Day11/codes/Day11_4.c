#include<stdio.h>
void readArray( int *ptr); 
void printArray( int arr[]); 
int main()
{
    int arr[4] = {100,200,300,400}; 
    printArray(arr); 
    int i; 
    printf("\n Inside function main :: \n\n"); 
    for(i = 0 ; i<4 ; i++)
         printf("%d ",arr[i]);    
    return 0;
}

void printArray( int *a)//pointer notation 
{
        int i;   
        for( i = 0 ; i < 4 ; i++)
            printf("\n %d",a[i]);//a[i]=>*(a+i) => *(500 + 1) =>200 

        for( i = 0 ; i < 4 ; i++)
              ++a[i]; 
}

/*

        consider array index starts from 1 
        
    arr 
         10   20  30   40   50     
        [1]  [2]  [3]  [4]  [5]
        100  104  108  112  116 

        arr[1] => 10 

        arr[1]
        *(arr + 1)
        *(100 + 1)
        *(100 + 1 * 4)
        *(104)
        valueat(104)
        20 


*/


