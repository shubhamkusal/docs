#include<stdio.h> 
int main()
{
    int num1 = 10; 
    int num2 = 500; 
    int num3 = 3000;
    //nested-if 
    if(num1 > num2 )//if(10 > 500)=>if(0)
    {
        if(num1 > num3)
        {
            printf("num1 is greatest"); 
        }
        else 
        {
             printf("num3 is greatest"); 
        }  
    } 
    else 
    {
         if(num2 > num3)//if(500 > 3000)=>if(0)
         {
             printf("num2 is greatest"); 
         }
         else 
         {
             printf("num3 is greatest"); 
         }
    }
    return 0;
}
