#include<iostream>
using namespace std;
//int& refa=a
void mySwap(int& refa,int& refb)
{
    int t=refa;
    refa=refb;
    refb=t;
}
// int a1=5
// int b1=9
// void mySwap(int a1,int b1)
// {
//     int t=a1;
//     a1=b1;
//     b1=t;
// }

int main()
{
    int a=55,b=99;
    cout<<"\n before a="<<a<<" b="<<b;
    mySwap(a,b);
   // mySwap(5,9);
    cout<<"\n after a="<<a<<" b="<<b;
    cout<<"\n";
    return 0;
}