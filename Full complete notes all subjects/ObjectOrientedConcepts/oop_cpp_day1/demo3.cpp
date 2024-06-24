#include<stdio.h>

//Default Arguments
int add(int a=0,int b=0,int c=0,int d=0)
{
    int r;
    r=a+b+c+d;
    printf("\n a=%d  b=%d  c=%d  d=%d", a,b,c,d);
    return r;
}


int main()
{
    int r;
    r=add();
    printf("  result=%d",r);
    r=add(1);
    printf("  result=%d",r);
    r=add(1,2);
    printf("  result=%d",r);
    r=add(1,2,3);
    printf("  result=%d",r);
    r=add(1,2,3,4);
    printf("  result=%d",r);
    return 0;
}