#include<stdio.h>

//void printMessage(); ////function prototype 

//Inline functions get replaced by compiler at its call statement. 
//It ensures faster execution of function.


//Function Definition
inline void printMessage()
{
     //function body
    printf("\n Good morning ..");
    printf("\n hello to all OM44 .. :)");
}
int main()
{
    //--
    //--
    printMessage();//Function Call
    //--
    //--
    printMessage();
    printMessage();
    printMessage();
    //--
    //--
    return 0;
}
