#include<stdio.h> 

int main( )
{
    // && , || , ! => logical operators 
    // T , F => 1 , 0 
    //logical NOT=>! 
    //printf("%d ",!10);// 0 
    //10=>T => !T => F  
    //printf("%d ",!0);// !0=>!F=>T=>1 
    //printf("%d ",!-10);// !T=>F => 0 
    printf("%d",!!10);
    //!!10 => 10 => T => ! !T=>F =>!F=>T=>1 
    return 0; 
}
/*
    != => relational opr ( comparison )
    2!=3=>T => 1  
    
    ! => logical opr ( logical NOT )
    int x = 1; 
    int ans; 
    ans = !x;   
*/