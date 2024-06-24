#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        int imag;
    public:
    // complex()
    // {
    //     cout<<"\n -----complex()-----";
    //     this->real=1;
    //     this->imag=1;
    // }
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
    }
    complex(const complex& refc1)
    {
        this->real=refc1.real;
        this->imag=refc1.imag;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }  
    complex sum(complex& c2)
    {
        complex c3;
        c3.real=this->real+c2.real;
        c3.imag=this->imag+c2.imag;
        return c3;
    }
};
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex c2(3,2);
    c2.printComplexNumber();

    complex c3;
    c3=c1.sum(c2);
    c3.printComplexNumber();
    return 0;
}