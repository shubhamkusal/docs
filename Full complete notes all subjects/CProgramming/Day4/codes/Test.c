#include<stdio.h>
// int main(void)
// {
// char c1='z';
// printf("%d\t%c\t%o",c1-57,c1-'9',c1-32);
// //                 122-57,122-57,122-32  

// return 0;
// }

int main()
{
    //unsigned char ch = -2; // 0 to 255 => 256 

    //printf("%u",ch); //256 - 2 => 254
    
    signed char c1   =  -1; //-1 
    unsigned char c2 = -1;//256 - 1 => 255   
    printf("%d\n",c1+c2 ); 
    //            -1+255=> 254
    return 0;
}
