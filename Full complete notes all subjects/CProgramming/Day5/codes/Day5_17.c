#include<stdio.h> 
int main()
{
    // int ans; 
    // int num1 = 11; 
    // int num2 = 22; 
    // ans = num1 && ++num2; 
    // //     T   && ++T
    // //          T 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 0; 
    // ans = num1 && ++num2; 
    // //      F  &&  XXX
    // //          F 

    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
   
    // int ans; 
    // int num1 = 0; 
    // int num2 = 0; 
    // ans = num1++ && ++num2; 
    // //      F ++ &&  XX
    // //          F

    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
   
    // int ans; 
    // int num1 = 0; 
    // int num2 = 0; 
    // ans = ++num1 && ++num2; 
    // //    ++F=>T && F=>T
    // //          T 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
   
    // int ans; 
    // int num1 = 12; 
    // int num2 = 0; 
    // ans =  num1 && ++num2; 
    // //      T   && ++F=>T
    // //          T       
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 12; 
    // ans =  num1++ && ++num2; 
    // //      F        &&  XXX
    // //          F 

    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    
    // int ans; 
    // int num1 = 0; 
    // int num2 = 12; 
    // ans =  ++num1 || num2++; 
    // //    ++F=>T  ||   XXX
    // //          T 
    // printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    
    
    int ans; 
    int num1 = 0; 
    int num2 = 12; 
    ans =  num1++ || num2++; 
    //      F++   ||   T++ 
    //            T        

    printf("ans = %d num1 = %d num2 = %d",ans,num1,num2); 
    
    return 0;
}
