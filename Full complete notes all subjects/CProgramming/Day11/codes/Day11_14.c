#include<stdio.h> 

int main( )
{
    //string literals 
    char str4[5] = "Tech"; 
    //Tech is a string constant 
    // short hand decln => 'T' 'e' 'c' 'h' 

    char str[ ] = "Ketan"; 
    /*
            K    e   t   a    n    \0
           [0]  [1] [2] [3]  [4]   [5]
    */
    char str6[4] = "pune"; 

    
    //printf("%s",str); 
    
    int i; 
    
    // for(i = 0 ; i < 4  ; i++)
    //           putchar(str6[i]);   
    
    
    // for(i = 0 ; str4[i]!='\0' ; i++)
    //           putchar(str4[i]);   
    
    // for(i = 0 ; str[i]!='\0' ; i++)
    //           putchar(str[i]);   
    
    
    return 0; 
}