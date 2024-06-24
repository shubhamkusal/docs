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
    complex c1;
    cout<<"\n size of c1="<<sizeof(c1);
    c1.printComplexNumber();
    c1.acceptComplexNumber();
    c1.printComplexNumber();

    // complex c2(4,5);
    // c2.printComplexNumber();
    return 0;
}