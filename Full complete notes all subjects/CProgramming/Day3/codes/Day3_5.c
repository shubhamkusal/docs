#include<stdio.h> 

int main( )
{
    //int num1 = 10; //variable decln + init 
    //int num2 = 20; //variable decln + init 
    int num1 = 10 , num2 = 20; //variable decln + init 
    char ch = 'A'; //variable decln + init 
    int num4; 
    //printf("%d",num1);
    //printf("%d",num2); 
    
    //printf("%d %d",num1,num2);
    //      10 20 
    //printf("num1 = %d num2 = %d",num1,num2);
    //      num1 = 10 num2 = 20 
    
    printf("char = %c num1 = %d num2 = %d",ch,num1,num2); 
    //      char = 'A' num1 = 10 num2 = 20  
    
    return 0; 
}
/*
    assignment can be done multiple number of times 
    but init can be done only once. 


    int num1 = 10; 
    int num1 = 10;  // NOT OK 

    int num1 = 10; 
    num1 = 20; // OK 
    num1 = 30; // OK 

*/