#include<stdio.h>
// function overloading.

void printValue(int a)
{
    printf("\n int a=%d",a);
}
//Return type is not considered for function overloading.
// int printValue(int a)
// {
//     printf("\n int a=%d",a);
//     return 0;
// }
void printValue(char ch)
{
    printf("\n char ch=%c",ch);
}
void printValue(int a,int b)
{
    printf("\n int a=%d int b=%d",a,b);
}
void printValue(int a,char ch)
{
    printf("\n int a=%d char ch=%c",a,ch);
}
void printValue(char ch,int n)
{
    printf("\n  char ch=%c int n=%d",n,ch);
}
int main()
{
    printValue(10);
    printValue('A');
    printValue(22,33);
    printValue(4,'Z');
    printValue('E',7);
    return 0;
}