#include<stdio.h> 

int main( )
{
    //strcmp(); 
    // char str1[20] = "Sunbeam"; //stack 
    // char str2[20] = "Sunbeam";

    // if(str1 == str2) // comparing the addresses 
    //     printf("Same"); 
    // else 
    //     printf("Not same"); 

    // char *str1 = "info"; // pointer to string 
    // char *str2 = "info";
    // //memory is allocated from RO data section   
    
    // if(str1 == str2)
    //     printf("same"); 
    // else
    //     printf("not same");     

    //char str2[20] = "Sunbeam"; 
    //str2[0] = 'K';//OK  
    //puts(str2); 
    
    
    // char *str5 = "Sunbeam"; 
    // //puts(str5); // OK 
    // str5[0] = 'K'; //*(str5 + 0)
    // puts(str5); // NOT OK 
    // // Trying to modify from RO data section 
    // // Runtime error
    
    char str6[20] = "sunbeam"; 
    //printf("%s",str6); 
    printf(str6);//sunbeam
    printf("\n");
    printf(str6 + 1);//unbeam
    printf("\n"); 
    printf(str6 + 2);//nbeam
    return 0; 
}