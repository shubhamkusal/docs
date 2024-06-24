#include<stdio.h> 

int main( )
{
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 2; 
    // int ans; 

    // ans = (num1 + num2 + num3) / 3;
    // /*
    //       (int + int + int) /(int)
    //            (int) / (int)
    //             (int)
    //      RHS => int 
    //      LHS => int           
    // */ 
    // printf("ans = %d",ans);  
    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1; 
    // float ans; 

    // ans = (num1 + num2 + num3) / 3;
    // /*
    //       (int + int + int) /(int)
    //            (int) / (int)
    //             (int)
    //      RHS => int =>1.6=>1  
    //      LHS => float
    //      float<=int 
    //      1.00<=1            
    // */ 
    // printf("ans = %.2f",ans);  

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1; 
    // float ans; 

    // ans = (num1 + num2 + num3) / 3.0;
    // /*
    //       (int + int + int) /(double)
    //            (int) / (double)
    //             (double)
    //      RHS => double =>1.6=>1.6  
    //      LHS => float
    //      float<=double 
    //      1.6<=1.6            
    // */ 
    // printf("ans = %.2f",ans);  

    // int num1 = 2; 
    // int num2 = 2; 
    // int num3 = 1; 
    // float ans; 

    // ans = (num1 + num2 + num3) / 3.0f;
    // /*
    //       (int + int + int) /(float)
    //            (int) / (float)
    //             (float)
    //      RHS => float =>1.6=>1.6  
    //      LHS => float
    //      float<=double 
    //      1.6<=1.6            
    // */ 
    // printf("ans = %.2f",ans);  
    int num1 = 2; 
    int num2 = 2; 
    int num3 = 1; 
    float ans; 

    ans = ((float)num1 + num2 + num3) / 3;
    /*
          (float + int + int) /(int)
               (float) / (int)
                (float)
         RHS => float =>1.6=>1.6  
         LHS => float
         float<=double 
         1.6<=1.6            
    */ 
    printf("ans = %.2f",ans);  
    return 0; 
}