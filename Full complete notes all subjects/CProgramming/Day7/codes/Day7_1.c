#include<stdio.h> 

int main()
{   
    //annonymous enum 
    enum 
    {
        RED,BLUE,GREEN 
    }c1,c2,c3; //variable 
    return 0;
}


// int main( )
// {
//     int var = 20; 
//     //enum => user defined datatype  
//     //datatype => int , float , char , double 
//     // int x; 
//     enum color //creating a datatype 
//     {
//           RED,BLUE,GREEN,VIOLET  
//         //RED=1,BLUE,GREEN,VIOLET  
//         //RED=1,BLUE=2,GREEN=3,VIOLET=4
//         //RED=-1,BLUE,GREEN,VIOLET     
//         //RED=-1,BLUE,GREEN=-1,VIOLET  // OK    
//         //RED='A',BLUE,GREEN=-1,VIOLET  // OK    
//         //RED=1.5,BLUE,GREEN=-1,VIOLET  // NOT OK
//         //RED=(int)1.5,BLUE,GREEN=-1,VIOLET  // OK        
//         //RED,BLUE,GREEN=-1,VIOLET,red 
//         //RED,BLUE,GREEN=-1,VIOLET,RED  
//         //RED=var,BLUE,GREEN=-1,VIOLET,red 
          
//     }; 
//     //printf("%d",RED); // 0 
//     //printf("%d",BLUE);//1
//     //printf("%d",GREEN);//2   
    
//     // int          x ;=> x++  
//     //datatype variable-name 
//       enum color   c1,c2,c3;
//     return 0; 
// }

 
// int main( )
// {
//     //enum => user defined datatype  
//     //datatype => int , float , char , double 
//     // int x; 
//     enum color //creating a datatype 
//     {
//         RED,BLUE,GREEN 
          
//     }; 
//     //printf("%d",RED); // 0 
//     //printf("%d",BLUE);//1
//     //printf("%d",GREEN);//2   
    
//     // int          x ;=> x++  
//     //datatype variable-name 
//       enum color   c1,c2,c3;
//       c1 = RED; 
//       //RED++; // 0 = 0 + 1; 
//       //printf("%d ",c1); //0  
//       c1++;  
//       //printf("%d ",c1); //1   
//       //printf("%d ",sizeof(int));//4
//       printf("%d ",sizeof(enum color));//4  
//       printf("%d ",sizeof(c1));//4  
//     return 0; 
// }

 