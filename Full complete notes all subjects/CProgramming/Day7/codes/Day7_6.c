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
    //num1 and num2 are called actual arguments 
    printf("ans = %d",ans); //30 
    return 0; 
}

//main( ) =>calling function 
//addition ( )=> called function 

//function defination 
//num1 and num2 are formal argument
//            10      20  
int addition( int a , int b  )
{
    //a,b,z are called as local variable 
    //a,b,z are local to the function addition 
     int z;
     z = a + b;  // 30 
     return z; 
}
/*
    local variable => variable declared inside the function are called as 
                      local variables 


*/