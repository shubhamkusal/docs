#include<stdio.h> 
int main(int argc, char *argv[])
{
    //a.exe 1 2 
    //printf("%u ",argv[0]);
    //printf("%u ",argv[1]);
    //printf("%u ",argv[2]);   

    //printf("%u ",*(argv + 0)+0);
    //printf("%u ",*(argv + 0)+1);

    // printf("%c ",*(*(argv + 0)+0));//a 
    // printf("%c ",*(*(argv + 0)+1));//.
    // printf("%c ",*(*(argv + 0)+2));//e  
    
    printf("%c ",argv[0][0]);//a
    printf("%c ",argv[0][1]);//.
    printf("%c ",argv[0][2]);//e 

    return 0;
}
