#include<stdio.h> 

int main( )
{
    /*
            A - Z => 65 to 90
            a - z => 97 to 122 
            \n , \r , \t , \b => char => ascii  
    */

    //char ch = 'A'; // 65 
    //char => 1 byte => 8 bits 
    // 65 ka binary => 8 bits 
    //char are internally integral constants 
    //char ch = 65; // OK 

    //printf("%c ",ch); // 65 => A 
    //printf("%d ",ch); // 65 => 65 

    //printf("%d",'\n');
    // \n=> ASCII value  

    //printf("%d",'\n' - '\r');
    
    //printf("%d %c",65,65);
    //      %d => 65 
    //      %c => A  
    
    //printf("%d %d",'0' ,'9');//48 - 57  
    
    return 0; 
}