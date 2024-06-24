#include<stdio.h> 
//function declaration 
double addition( double num1 , double num2); 
void multiplication( double a , double b ); 
//user-defined function 
void subtract( void   ); 
int division( int num , int den); 
int main(   )
{
    double num1 = 10.00,num2 = 2.00,res; 
    res = addition(num1,num2); // function call 
    printf("res = %.2lf",res); 
    
    multiplication( 2.0 , 4.0); 
    int num,den,res1; 
    printf("\nEnter the num1 and num2"); 
    scanf("%d%d",&num,&den); // 4 2  
    res1 = division(num,den); 
    printf("res = %d",res1); //2 

    subtract(  ); 
    return 0; 
}
//void subtract(  )
//void subtract( void  )

void subtract( void )
{
    int p,q,r; 
    printf("\n Enter the 2 numbers"); 
    scanf("%d%d",&p,&q); 
    r = p - q; 
    printf("\n r = %d",r);  
}

int division( int num , int den)
{
        //int r; 
        //r = num/den;
        return num/den;  
}

//user-defined function 
void multiplication( double a , double b )
{
        double c; 
        c = a * b; // 8.0 
        printf("\n multiply = %lf",c); 
        
}


double addition( double num1 , double num2)
{   
    //num1,num2 => local variable 
    double res; 
    res = num1 + num2; 
    return res; 
}