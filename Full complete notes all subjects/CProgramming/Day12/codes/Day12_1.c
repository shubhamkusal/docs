#include<stdio.h> 
#include<string.h> 
char* mystrcpy(char *dest, const char *src);
int main()
{
    char src[50] = "Hello"; 
    char dest[50]; 
    //strcpy(dest,src);
    mystrcpy(dest,src); 
    puts(dest);    
    return 0;
}
// src => H e l l o \0 
// dest=> H e l l o \0    



char* mystrcpy(char *dest, const char *src)
{
        int i = 0; 
        while(src[i]!='\0')
        {
            dest[i]=src[i]; 
            i++; 
        }
        dest[i] = '\0'; 
        return dest; 
}
//geeksforgeeks.com 

// ABC ABC => same 
// ABC abc => not same (strcmpi)



// int mystrlen(const char *s); 
// int main()
// {
//     int res; 
//     char name[50] = "Reader"; 
//     //printf("%d",strlen(name)); 
//     res = mystrlen(name); 
//     printf("res = %d",res); 
//     return 0;
// }
// // R e a d e r \0 
// int mystrlen(const char *s)
// {
//         int i = 0; 
//         while(*(s + i)!='\0') //s[i]
//         {
//                i++;  
//         }
//         return i; 
// }
// //*(s + i) => *(100 + 6) => *(102)