#include<iostream>
using namespace std;

int main()
{
    int n1;
    n1=5;

    int &ref=n1;
    ref=10;

    cout<<"\n value of n1="<<n1<<"  address of n1="<<&n1;
    // cout<<"\n value of ref="<<ref<<"  address of ref="<<&ref;
    cout<<"\n";
    return 0;
}