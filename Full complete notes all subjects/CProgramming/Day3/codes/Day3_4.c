#include<stdio.h> 
int main()
{

    //int,double,char => datatypes 
      int num = 10;//variable declaration + initialization  
      printf("%d",num);//10 
      num = 20; //assignment  
      printf("%d",num);//20 
      num = -100; //assignment 
      printf("%d",num);//-100 
      num = 200; //assignment 
      num = 300; //assignment 
      num = 500; //assignment 
      printf("%d",num);//500
      int num2; //variable declaration 
      num2 = -100; // assignment 
      printf("%d",num2); // -100 
    
    

    return 0;
}
/*
 1.
    char ch = 'A'; //variable declaration + init  
    char ch = 'A';// NOT OK => Error  

 2. char ch; //variable declaration //OK 
    ch = 'A'; // assignment   => OK    

 3. double d1;  //variable declaration    
    printf("%lf",d1);//Garbage ( storage class ) 
*/