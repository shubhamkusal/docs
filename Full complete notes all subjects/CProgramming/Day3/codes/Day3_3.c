#include<stdio.h> 
int main()
{

    //int,double,char => datatypes 
      int num = 10;//variable declaration + initialization  
      double dvar = 12.3; //variable declaration + initialization  
      char ch = 'A';//variable declaration + initialization    
    
    
    //format specifier 
    //int => %d 
    //double=> %lf
    //char => %c 
    printf("%d\n",num); 
    printf("%.2lf\n",dvar); 
    printf("%c",ch); 

    

    return 0;
}
