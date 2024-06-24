#include<stdio.h>
// int main(void)
// {
// int val = 10;
// float fval = 56.789643;
// printf("%5d%*.*f",val,val,val-8,fval);
// //         %10.2f=> fval 
// //            1 0           5 6 . 7 8 
// //      - - - - - - - - - - - - - - - 
// return 0;
// }

// #include<stdio.h>
// int main()
// {
// printf("%d %d %d",'\r'-'\n','\r'-'\t','\r'-'\b');
// //                 13 - 10,  13 - 9 ,  13 - 8  
// return 0;
// }

//1234 6789
 
// #include<stdio.h>
// int main(void)
// {
// int a,b;
// printf("Specify two numbers\n");
// //scanf("%2d%2d",&a,&b);
// scanf("%2d%*c%*c%2d",&a,&b);
// printf("a=%d b=%d\n",a,b);
// return 0;
// }

//What will be the output of the following:
#include<stdio.h>
int main(void)
{
char c1=65;
printf("%x\t%c\t%o",c1,c1,c1);
//65 => hex 
//65 => A 
//65 => octal  
return 0;
}