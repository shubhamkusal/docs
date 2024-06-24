#include<stdio.h> 

int main( )
{
    //typedef => alias (nickname)
    //typedef => datatype (int , float ,char , double)
      typedef int INTEGER; 
      int a; 
      INTEGER b;   
      typedef INTEGER INT; 
      INT y; 
      size_t x;  //unsigned int

      enum color 
      {
          RED,BLUE,GREEN 
      };

      //datatype  variable-name 
      //enum color  c1,c2,c3;   
        typedef enum color e_c;
        e_c c1,c2,c3;     
}