#include<stdio.h> 

int main( )
{
    int number; //variable declaration 
    int roll = 500; //variable declaration + init 
    /*
        double basic_salary = 1000.00; 
        double total_salary = 2000.00; 
    */
    double basic_salary = 1000.00,total_salary = 2000.00 ; 
//we can declare multiple variables in single line     
    
    char ch = 'B';  //variable declaration + init 
    
    printf("variables and datatypes\n");
    number = 60; //assignment 
    printf("number = %d\n",number);
    //      number = 60  
    roll = 120; //assignment 
    printf("roll = %d\n",roll);//120  
    number = 100;//assignment  
    printf("number = %d\n",number);//100 

    printf("%.2lf %.2lf\n",basic_salary,total_salary); 

    printf("%d %d %.2lf %.2lf\n",roll,number,basic_salary,total_salary); 
    printf("%c",ch); 
    return 0; 
}
// Revision 