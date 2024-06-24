#include<stdio.h> 
int main( )
{
    int a = 1;
    int b = 2; 
    int c = 3; 
    //a+=b+=c+=1;
    /*
            c = c  + 1 => 3 + 1 => 4 
            b = b  + c => 2 + 4 => 6 
            a = a  + b => 1 + 6 => 7 
    */     
    a = b = c = -1; 
    printf("a = %d b = %d  c = %d",a,b,c); 
    return 0; 
}
// int main()
// {
//     int num = 4; 
//     //num = num + 1; 
//     //num = num * 2;
//     //num = num / 3;   
//     //num = num % 2;    
//     //short hand assignment opr 
//     //num+=1; // num = num + 1  
//     //num*=2; // num = num * 2  
//     //num/=3; // num = num / 3    
//     //num %=  2; // num = num % 2  
//     printf("%d",num); 
//     return 0;
// }

/*

    unary ( + , -)
    int num = -1;
    int num2 = +1;

    binary ( + , -)
    int num1 = 2 + 3;     

*/
