#include<stdio.h> 

int main( )
{
    
    
    // int i; 
    // int j; 
    // for(i = 1 ; i<=5 ; i++)//i=1,2,3
    // {   
    //     printf("for each i :%d\n",i); 
    //     for(j=1; j<=5 ; j++)//j=1
    //     {
    //          printf("       j:%d",j);       
    //     }
    //     printf("\n"); 
    // }

    // int i; 
    // int j; 
    // int k; 
    // for(i = 1 ; i<=5 ; i++)//i=1,2,3,4,5 
    // {   
    //     printf("for each i :%d\n",i); 
    //     for(j=1; j<=5 ; j++)//j=1
    //     {   
    //         printf("for each j :%d\n",j); 
    //         for(k = 1 ; k<=5 ; k++)//k=1...5,6 
    //         {
    //                  printf("       k:%d",k);  
    //         } 
    //         printf("\n");
    //     }
    //     printf("\n\n"); 
    // }

     int i; 
    int j; 
    int k; 
    for(i = 1 ; i<=5 ; i++); 
    {   


        printf("for each i :%d\n",i); //6 
        
        for(j=1; j<=5 ; j++); 
        
        
        
        {   
            printf("for each j :%d\n",j);//6  
            for(k = 1 ; k<=5 ; k++); 
           
           
            {
                     printf("       k:%d",k); // 6  
            } 
            printf("\n");
        }
        printf("\n\n"); 
    }
}