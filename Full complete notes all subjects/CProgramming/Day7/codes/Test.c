// #include<stdio.h>
// int main( void )
// {
// char i = 48;
// switch (i)
// {
// case '2': printf("SunBeam Karad");break;//case 50: 
// case '1': printf("SunBeam Market Yard");break;//case 49 
// default : printf("SunBeam IT Park Hinjewadi");
// }
// //no case match so default case 
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// int i=5;
// if (!printf("0"))//if(!1)=>if(0)=>if(false)
// i = 3;
// else
// i = 5;
// printf("%d", i);//5 
// //05 
// //becoz printf written inside the if gets executed 
// return 0;
// }

// #include<stdio.h>
// int main( void )
// {
// char check = 'a';//97 
// again:
// if(check)//if(97)
// {
// switch (check)//switch(97)
// {
// case ('a'=='b' || 1 ) : printf("PG-DAC "); break;//case 1: 
// case 0 && 'b'=='a' : printf("PG-DMC "); break;//case 0: 
// default : printf("PG-DITISS"); break; 
// }
// }
// else
// goto again;
// return 0;
// }

#include<stdio.h>
int main( void )
{
int x=101,y=202;
if(!(!x)&& x)
//if(101)=>if(T)=>if(!T)=>if(F)=>if(!F)=>if(T)
//if(T) && 101) 
//if(T) && T) 
//   if(T)   
printf("inside if x=%d\n",x);
else if(!(!x)&& x)
printf("inside 1st netsed if x=%d\n",x);
else if(!(!x)&& x)
printf("inside 2ed netsed if x=%d\n",x);
else
printf("inside else y=%d\n",y);
return 0;
}