#include<stdio.h> 

int main( )
{
    //char ch ='A'; 
    //int num = 10; 
    //width specifier 
    //printf("          %d",num); 
    //printf("%10d\n",num);// right justified 
    //                1 0 
    //- - - - - - - - - -  
    //printf("%-10d%c",num,ch);// left justified 
    //1 0                 A 
    //- - - - - - - - - -  
    //printf("%010d\n",num);// right justified 
    //0 0 0 0 0 0 0 0 1 0 
    //- - - - - - - - - -  
    
    float fvar = 12.32;
    //float => %f 
    //printf("%10.2f",fvar);//right justified 
    //           1 2 . 3 2;
    // - - - - - - - - - -   
    //printf("%010.2f",fvar);//right justified 
    
    //printf("%-10.2f",fvar);//left justified 
    // 1 2 . 3 2  
    // - - - - - - - - - - 
    
    //printf("%.2f",fvar);
    //printf("%.f",fvar);//12.32 => 12 
    
    int var = 10; 
    printf("%*.*f",var,var-8,fvar);
    //     %10.2f => fvar
    //               1 2 . 3 2 
    //     - - - - - - - - - -  
    return 0; 
}