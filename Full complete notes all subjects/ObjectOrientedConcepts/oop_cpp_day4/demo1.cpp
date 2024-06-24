#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        int imag;
    public:
    complex()
    {
        cout<<"\n -----complex()-----";
        this->real=1;
        this->imag=1;
    }
    complex(int r,int i)
    {
        cout<<"\n -----complex(int,int)-----";
        this->real=r;
        this->imag=i;
    }
    complex(const complex& refc1)
    {
        cout<<"\n -----complex(complex&)-----";
        this->real=refc1.real;
        this->imag=refc1.imag;
    }
    void acceptComplexNumber()
    {
        cout<<"\n enter Complex Number";
        cin>>this->real>>this->imag;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }
    ~complex()
    {
        cout<<"\n ---~complex()---";
    }
};
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex c2(c1);    // complex c2=c1;
    c2.printComplexNumber();
    
    return 0;
}