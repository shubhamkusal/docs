#include<stdio.h> 
int main()
{
    int a = 1; 
    int ans; 
    //ans = ++a,++a,++a; 
    //      2, 3 , 4 

    ans = a++,a++,a++;
    //    1  

    printf("%d %d",ans,a); 
    //              1  4   
    return 0;
}
