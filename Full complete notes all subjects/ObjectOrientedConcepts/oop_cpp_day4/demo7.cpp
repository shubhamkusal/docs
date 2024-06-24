
#include<iostream>
using namespace std;
class complex
{
    private:
        int *realPtr;
        int imag;
    public:
    complex(int r=1,int i=1)
    {
        cout<<"\n -----complex(int,int)-----";
        this->realPtr=new int;
        *this->realPtr=r;
        this->imag=i;
    }
    complex(const complex& c1)
    {
        cout<<"\n -----complex(complex)-----";
        this->realPtr=new int;
        *this->realPtr=*c1.realPtr;
        this->imag=c1.imag;
    }
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<*this->realPtr<<"+j"<<this->imag;
    }
    ~complex()
    {
        cout<<"\n ---~complex()---";
        if(this->realPtr!=NULL)
        {
            delete this->realPtr;
            this->realPtr=NULL;
        }
    }
};
int main()
{
    complex c1(7,6);
    c1.printComplexNumber();

    complex c2(c1); //  complex c2=c1;
    c2.printComplexNumber();
    return 0;
}