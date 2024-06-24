#include<iostream>
using namespace std;

int main()
{
    int n,d;
    try
    {
        cout<<"\n enter n,d";
        cin>>n>>d;
        if (d==0)
            throw "Error";
        int div=n/d;
        cout<<"\n result="<<div;
    }
    catch(int e)
    {
        cout<<"\n divid by zero error... ---(int)--";
    }
    catch(char e)
    {
         cout<<"\n divid by zero error... ---(char)--";
    }
    catch(...)
    {
         cout<<"\n divid by zero error... ---(...)--";
    }
    cout<<"\n";
    return 0;
}