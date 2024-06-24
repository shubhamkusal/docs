#include<stdio.h> 

int main( )
{
    //sizeof( ) => operator 
    //sizeof => integer => %d
    // int , char , float , double 
    int num1 = 10; 
    char ch = 'A';
    float fvar = 12.3; 
    double dvar = 10.2;   

    // printf("%d\n",sizeof(num1));//4 bytes => 32 bits 
    // printf("%d\n",sizeof(ch)); // 1 bytes 
    // printf("%d\n",sizeof(fvar));// 4 bytes 
    // printf("%d\n",sizeof(dvar));  // 8 bytes 

    printf("%d\n",sizeof(int));//4 bytes => 32 bits 
    printf("%d\n",sizeof(char)); // 1 bytes 
    printf("%d\n",sizeof(float));// 4 bytes 
    printf("%d\n",sizeof(double));  // 8 bytes 
    return 0; 
}
/*
    IMP 
    Number system 
    decimal number system 
    octal number system 
    hexadecimal number system 
    binary number system 

    1s Compliment 
    2s Compliment 
    binary addition 
*/