#include<stdio.h> 
int main()
{

    //int,double,char => datatypes 
    int num = 10; 
    double dvar = 12.3; 
    char ch = 'A';  

    //format specifier 
    //int => %d 
    //double=> %lf
    //char => %c 
    printf("%d\n",num); 
    printf("%.2lf\n",dvar); 
    printf("%c",ch);     

    return 0;
}
