#include<iostream>
using namespace std;

int main()
{
    // 1 int 
    int* ptr1=(int*)malloc(4);
    *ptr1=11;
    cout<<"\n *ptr1="<<*ptr1;
    free(ptr1);
    ptr1=NULL;

    //1 int ==>new
    int* ptr2=new int;
    *ptr2=12;
    cout<<"\n *ptr2="<<*ptr2<<"\n";
    delete ptr2;
    ptr2=NULL;

    // 5 int
    int* ptr3=(int*)malloc(20);
    for (int i = 0; i < 5; i++)
    {
        ptr3[i]=i+1;
        cout<<"  \n ptr3 ["<<i<<"]= "<<ptr3[i];
    }
    free(ptr3);
    ptr3=NULL;

    //5 int new
    int* ptr4=new int[5];
    for (int i = 0; i < 5; i++)
    {
        ptr4[i]=i+2;
        cout<<"  \n ptr4 ["<<i<<"]= "<<ptr4[i];
    }
    delete[]ptr4;
    ptr4=NULL;

    cout<<"\n";
    return 0;
}