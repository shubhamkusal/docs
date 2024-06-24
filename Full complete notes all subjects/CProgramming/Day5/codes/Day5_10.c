#include<stdio.h> 
int main()
{
    //++, --
    //++=> increment => +1  
    //-- => decrement =>-1   

    //int num = 2; 
    //int ans = num; 
    //printf("%d %d",ans,num); // 2 2 
    
    // int ans; 
    // int num = 2;
    // ans = ++num;//pre-increment ( num = num + 1 ) 
    // printf("%d %d",ans,num);  // 3 3  
    

    // int ans; 
    // int num = 2;
    // ans =  num++;//post-increment ( num = num + 1 ) 
    // printf("%d %d",ans,num);  // 2 3  

    // int ans; 
    // int num = 2;
    // ans = --num;//pre-decrement ( num = num - 1 ) 
    // printf("%d %d",ans,num);  // 1 1 
    
    int ans; 
    int num = 2;
    ans = num--;//post-decrement ( num = num - 1 ) 
    printf("%d %d",ans,num);  // 2 1 
    
    return 0;
}
