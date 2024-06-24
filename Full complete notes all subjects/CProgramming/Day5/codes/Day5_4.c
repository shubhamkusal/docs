#include<stdio.h> 
/*
    cal area and circumference 
    PI = 3.1412
    area = PI * r * r; 
    circum = 2 * PI * r  
*/
int main( )
{
    //variable declaration 
    float radius,area,circumference;  

    //Input: 
    printf("Enter the radius::");
    scanf("%f",&radius);  

    //Processing 
    //area = PI * r * r; 
    //circum = 2 * PI * r  

    area = 3.1412 * radius * radius; 
    circumference = 2 * 3.1412 * radius; 

    //Output:   

    printf("area =%.2f \n cir = %.2f",area,circumference); 
    return 0;
}
