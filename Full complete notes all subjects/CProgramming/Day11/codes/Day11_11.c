#include<stdio.h> 

int main( )
{
    //int *ptr;  // Wild pointer  
    //int *ptr = NULL; //NULL pointer 

    int num = 10; 
    float fvar = 12.3; 
    double dvar = 10.3; 
    char ch = 'A'; 

    void *ptr = NULL; 

    ptr = &num; 
    printf("%d \n",*(int*)ptr); 

    ptr = &fvar;  
    printf("%.2f \n",*(float*)ptr);

    ptr = &dvar;   
    printf("%.lf \n",*(double*)ptr);

    ptr = &ch;
    printf("%c \n",*(char*)ptr);

    return 0; 
}
