#include<stdio.h> 

int main( )
{
    char *numbers[ ] ={"one","two","three","four"}; 

    // printf("%u ",numbers[0]);//4214784 
    // printf("%u ",numbers[1]);//4214788
    // printf("%u ",numbers[2]);//4214792 
    // printf("%u ",numbers[3]);//4214798 

    //  printf("%u ",*(numbers+0)+0);//84 
    //  printf("%u ",*(numbers+0)+1);//85
    //  printf("%u ",*(numbers+0)+2);//86
    //  printf("%u ",*(numbers+0)+3);//87

    //printf("%c ",*(*(numbers+0)+0) );//o
    //printf("%c ",*(*(numbers+0)+1) );//n
    //printf("%c ",*(*(numbers+0)+2) );//e
    //printf("%d ",*(*(numbers+0)+3) );//\0

    printf("%c ",numbers[0][0]);//o
    printf("%c ",numbers[0][1]);//n
    printf("%c ",numbers[0][2]);//e
    
    return 0; 
}