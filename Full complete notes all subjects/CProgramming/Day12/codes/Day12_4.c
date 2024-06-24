#include<stdio.h> 
/*
        I/p a number
        0 => zero  
        1 => one 
        2 => two 
*/
int main()
{
    int num; 
    char *numbers[] = {"zero","one","two","three","four"};  
    
    //printf("%d ",sizeof(numbers)); //5 * 4 => 20 
    printf("Enter the number"); 
    scanf("%d",&num); //2 
    printf("%s",numbers[num]);//numbers[2]  
    return 0;
}

/*
    char *str1 = "one"; 
    char *str2 = "two"; 
    char *str3 = "three"; 
    char *str4 = "four"; 

    char *arr[] = {"one","two","three","four"};  

*/