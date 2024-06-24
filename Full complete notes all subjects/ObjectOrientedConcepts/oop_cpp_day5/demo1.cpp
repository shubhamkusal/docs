#include<iostream>
using namespace std;
class complex
{
    private:
        int real;
        int imag;
        static int count;  
    public:
    complex(int r=1,int i=1)
    {
        this->real=r;
        this->imag=i;
        count++;
    }
    static void printCount()
    {
        //this->  //not available
        cout<<"\n count ="<<count<<"  address of count="<<&count;
    } 
    void printComplexNumber()
    {
        cout<<"\n Complex Number="<<this->real<<"+j"<<this->imag;
    }  
};
int complex::count=0;//global definition of static data member 
int main()
{
    complex::printCount();

    // complex c1(2,3);
    // cout<<"\n size of c1="<<sizeof(c1);
    // c1.printCount();
    
    // complex c2(6,3);
    // c2.printCount();

    // complex c3;
    // c3.printCount();
    return 0;
}