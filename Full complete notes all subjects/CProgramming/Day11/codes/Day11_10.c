#include<stdio.h> 

int main( )
{
    int num = 10; 
    const int *ptr = &num;

    printf("num = %d",num); 

    //*ptr = 20; 
     
     printf("num = %d",num);//20  
    return 0; 
}
// int main( )
// {
//     const int num = 10; 
//     int *ptr = &num;

//     printf("num = %d",num); 

//     *ptr = 20; 
//      printf("num = %d",num);//20  
//     return 0; 
// }