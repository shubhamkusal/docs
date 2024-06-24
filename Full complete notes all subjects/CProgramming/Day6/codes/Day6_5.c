#include<stdio.h> 

int main( )
{
    //minimum of 3 numbers
    int a,b,c;
    printf("Enter the 3 numbers"); 
    scanf("%d%d%d",&a,&b,&c); 
//                 11 2  3 
      //11<2 && XXX=>F =>if(0) 
    if(a<b && a<c)
        printf("min = %d",a); 
    else 
    {
        if(b<c)//if(2<3)=>if(1)
          printf("min = %d",b); 
        else 
          printf("min =%d ",c); 
    }  
    return 0; 
}
