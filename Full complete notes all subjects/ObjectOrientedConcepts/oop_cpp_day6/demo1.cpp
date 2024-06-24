#include<iostream>
using namespace std;

//parent class
//base class
class base
{
    public:
    int b;
    void funBase()
    {
        cout<<"\n -------base::funBase()------";
    }
};
//child class
//derived class
class derived : public base
{
    public:
    int d;
    void funDerived()
    {
        cout<<"\n -------derived::funDerived()------";
    }
};





int main()
{
    // base b1;
    // cout<<"\n size of b1="<<sizeof(b1);
    // b1.funBase();

    derived d1;
    cout<<"\n size of d1="<<sizeof(d1);
    d1.funDerived();
    d1.funBase();
    cout<<"\n";
    return 0;
}