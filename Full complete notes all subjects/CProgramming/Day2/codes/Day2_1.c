/*
   This is multiline block comment in C program 
   Comments are ignored by compiler 
   They are used for sake of documentation 
   or explaination about the program  
*/
//This is a single line comment 
#include<stdio.h>//header file inclusion   
//stdio.h header file contain standard function declaration 
// we will learn function in detail in function topic 

//main( ) is entry point function in C
//user-defined function  
//program must have main( ) function at least 
//int => integer 
int main(  )
{
    //printf() is used to print some data/string on terminal 
    //string => "Sunbeam" , "CDAC" , "Hello world" , "A","10"
    //data => 10,12.3,'A'
    //escape sequence => \n
    printf("Hello\n");
    printf("world\n");
    printf("Sunbeam");
    printf("Hello\nworld\nSunbeam"); 
    /*
            Hello
            world
            Sunbeam
    */ 
    return 0; 
    //return 0 indicates successfull execution of the program 
    //any non-zero value indicates program failure 
}
 

/*
    function => set of instructions 

    1.Library function 
    2.User defined function 

    1.Declaration => short information 

    2.Defination => implementation  

*/

/*
    //void => nothing 
        void main( )
        {
            //function not returning anything 
            
        }
        int main( )
        {
            return 0; 
        }

*/