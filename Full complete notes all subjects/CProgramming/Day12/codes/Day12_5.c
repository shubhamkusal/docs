#include<stdio.h>
//command line argument  
int main(int argc, char *argv[])
{
    //argc => argument count 
    //argv => argument vector 
    //printf("%d ",argc); 
    //a.exe 1 2 3 
    // printf("%s ",argv[0]); //a.exe 
    // printf("%s ",argv[1]); //1 
    // printf("%s ",argv[2]); //2
    // printf("%s ",argv[3]); //3 
    
    int i; 
    for( i = 0 ; i < argc ; i++)
           puts(argv[i]);  
    return 0;
}
//atoi()