#include<iostream>
using namespace std;

class shape
{
    public:
    virtual void calArea()
    {
        cout<<"\n ---shape::calArea()--";
    }
    virtual void input()
    {
        cout<<"\n  ----shape::input()----";
    }
};
//rect is a shape
class rect: public shape
{
    int l ,b;
    public:
    void calArea()
    {
       int a=l*b;
       cout<<"\n Area of Rect ="<<a;
    }
    void input()
    {
        cout<<"\n enter l and b";
        cin>>l>>b;
    }
};

//circle is a shape
class circle : public shape
{
    int r;
    public:
        void calArea()
        {
            int a=3.14*r*r;
             cout<<"\n Area of circle ="<<a;
        }
        void input()
        {
            cout<<"\n  enter redius";
            cin>>r;
        }
};
int main()
{
    shape *sptr=NULL;
    int ch;
    circle c1;
    rect r1;
    do
    {
        cout<<"\n 1:rect  2:circle  0:exit" ;
        cin>>ch;
        switch (ch)
        {
        case 1://rect
            sptr=&r1;
            break;
        case 2://circle
            sptr=&c1;
            break;
        }
        if(sptr!=NULL)
        {
            sptr->input();
            sptr->calArea();
        }
        sptr=NULL;
    } while (ch!=0);
    





    // circle c1;
    // c1.input();
    // c1.calArea();

    // rect r1;
    // r1.input();
    // r1.calArea();

    // shape sp;
    // sp.input();
    // sp.calArea();
    return 0;
}