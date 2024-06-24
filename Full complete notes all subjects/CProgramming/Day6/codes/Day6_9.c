#include<stdio.h> 

int main( )
{
    int var = 10; 
    int choice =  -3;
    
    //switch( choice )
    switch( choice )
    //switch( 1 + 1  )
    //switch( ++choice  )
    //switch( choice++  )
    //switch( 1.5  )
    //switch( (int)1.5  )
    {
       
        case 1 || 1: // case 1:             
        case 'A': case 'B': 
        printf("One "); 
        break; 

        case 2 && 0: // case 0:
        //case var: // NOT OK     
        printf("Two "); 
        break; 

        case -3: 
        printf("Three "); 
        break; 

        default:   
        printf("Invalid "); 
        break; 

        
    }

    return 0; 
}

// int main( )
// {
//     char choice =  'A';
    
//     //switch( choice )
//     switch( choice )
//     //switch( 1 + 1  )
//     //switch( ++choice  )
//     //switch( choice++  )
//     //switch( 1.5  )
//     //switch( (int)1.5  )
//     {
       
//         case 1: 
//         case 66: 
//         case 'A': 
//         //case 2 - 1 : //case 1: 
//         //case 1 :
//         //case 33:  
         
//         printf("One "); 
//         break; 

//         case 2: 
//         printf("Two "); 
//         break; 

//         case 3: 
//         printf("Three "); 
//         break; 

//         default:   
//         printf("Invalid "); 
//         break; 

        
//     }

//     return 0; 
// }
 

// int main( )
// {
//     int choice =  4;
    
//     switch( choice )
//     {
       

//         case 1: 
//         printf("One "); 
//         break; 

//         case 2: 
//         printf("Two "); 
//         break; 

//         case 3: 
//         printf("Three "); 
//         break; 

//         default:   
//         printf("Invalid "); 
//         break; 

        
//     }

//     return 0; 
// }
 

