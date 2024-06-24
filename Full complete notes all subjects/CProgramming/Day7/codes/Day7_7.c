#include<stdio.h> 
//function declaration 
int addition( int a , int b  ); 

//main => user-defined function 
int main( )
{
    //num1 and num2 are also local variables 
    int num1 = 10; 
    int num2 = 20; 
    int ans; 
    ans = addition( num1, num2 ); // function call 
    printf("ans = %d",ans); //30 
    ans = addition( 1, 2); //function call 2 
    printf("ans = %d",ans);//3  
    ans = addition(50,20); // function call 3 
    printf("ans = %d",ans); //70 
    return 0; 
}

//                50      20   
int addition( int a , int b  )
{
     int z;
     z = a + b;  // 70
     return z; 
}
