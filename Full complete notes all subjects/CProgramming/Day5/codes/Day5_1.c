#include<stdio.h> 
int main()
{
    int a; 
    float b; 
    a = 23 / 5;//(int/int)=>int (4.6) =>4  
    //RHS=>4 ( int )
    //LHS=>int 
    //printf("%d",a); // 4 
    
    b = 23 / 5; // (int / int)=> int =>4.6=> 4 
    //RHS=>4(int)
    //LHS=>float 
    //float<=int 
    // 4.0 <=4 
    //printf("%.2f",b); // 4.00 
    
    b = 23.0f/5;//(float) / (int) =>(float) => 4.6
    //RHS => 4.6 
    //LHS => float 
    printf("%.1f",b); // 4.6 
    return 0;
}

/*
    double 
    float
    int
    char
    if 2 operands are of diff type then smaller 
    type is promoted to larger type for calculation 

    int + int => int 
    int + double => double 
    char * int => int 
    short / int => int 
    int / float => float

    char and short are promoted to "int"
    for arithmatic calculation 
    char + char => int 
    short + char => int 
    char + short => int  

    (float)23 => 23 is int but consider it as a 
    float for this calculation 
*/