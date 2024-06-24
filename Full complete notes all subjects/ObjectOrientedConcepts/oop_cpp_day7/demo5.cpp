#include<iostream>
using namespace std;


class complex
{
    private:
        int real;
        int imag;
    public:
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
    void printComplexNumber()
    {
        cout<<" "<<this->real<<"+j"<<this->imag;
    }
};

template<class T>
void mySwap(T& refa,T& refb)
{
    T t=refa;
    refa=refb;
    refb=t;
}

int main()
{
    complex c1(11,22);
    complex c2(88,99);
    cout<<"\n before swap c1=";
    c1.printComplexNumber();
    cout<<" \n c2=";
    c2.printComplexNumber();
    mySwap(c1,c2);
    cout<<"\n after swap c1=";
    c1.printComplexNumber();
    cout<<" \n c2=";
    c2.printComplexNumber();
    mySwap(c1,c2);

    // char a1='A',b1='Z';
    // cout<<"\n before a1="<<a1<<" b1="<<b1;
    // mySwap(a1,b1);
    // cout<<"\n after a1="<<a1<<" b="<<b1;
    // int a=55,b=99;
    // cout<<"\n before a="<<a<<" b="<<b;
    // mySwap(a,b);
    // cout<<"\n after a="<<a<<" b="<<b;
    cout<<"\n";
    return 0;
}