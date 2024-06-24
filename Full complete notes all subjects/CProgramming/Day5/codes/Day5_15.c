#include<stdio.h> 
int main()
{   //>40   &&  <60
    //      30 
    //Logical AND 
    //printf("%d ",12 && 3); // 1 
    //           T  && T => T 
    //printf("%d ",0 && 3); //F => 0 
    //          F  && XXX
    //printf("%d ",12 && 0); //F => 0
    //           T  && F 
    //printf("%d ",0 && 0);// F => 0 
    //           F && F => F 

    //Logical OR 
    printf("%d ",12 || 3); // 1 
    //           T  || XXX => T

     printf("%d ",0 || 3); //T => 1 
    //          F   || T
    
    printf("%d ",12 || 0); //T =>1
    //           T  || XX 
    
    printf("%d ",0 || 0);// F => 0 
    //           F || F => F 

    
    return 0;
}
