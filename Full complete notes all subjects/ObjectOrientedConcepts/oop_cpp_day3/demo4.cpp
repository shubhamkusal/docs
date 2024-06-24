#include<stdio.h>
#include<iostream>
using namespace std;
class time
{
    private:
    int hr; //4
    int min; //4
    int sec;  //4
    public:
    //constructor overloading
    time()  //Parameterless constructor
    {
       // printf("\n ----- time()----");
        cout<<"\n ----- time()---- ";
        this->hr=0;
        this->min=0;
        this->sec=0;
    }
    time(int h,int m,int s) //Parameterized constructor
    {
       // printf("\n ----- time(int,int,int)----");
        cout<<"\n ----- time(int,int,int)----";
        this->hr=h;
        min=m;
        this->sec=s;
    }
    void initTime()
    {
        this->hr=0;
        this->min=0;
        this->sec=0;
    }
    void setMin(int min) 
    {
        this->min=min;
    }
    void setHr(int hr)
    {
        this->hr=hr;
    }
    void setSec(int sec)
    {
        this->sec=sec;
    }
    int getSec()
    {
        return this->sec;
    }
    int getHr()
    {
        return this->hr;
    }
    int getMin()
    {
        return this->min;
    }
    void printTime()
    {
        //printf("\n time=%d:%d:%d",this->hr,this->min,this->sec);
        cout<<"\n time="<<this->hr<<":"<<this->min<<":"<<this->sec;
    }
    void acceptTime()
    {
        //printf("\n Enter time");
        cout<<"\n Enter time";
       // scanf("%d%d%d",&this->hr,&this->min,&this->sec);
        cin>>this->hr>>this->min>>this->sec;
    }
    ~time()  //Destructor : used to release the resources
    {
        //printf("\n ------ ~time()------");
        cout<<"\n ------ ~time()------";
    }
};//end of class time
int main()
{
    time t1;
    //t1.initTime();
    t1.printTime();

    //8:15:30
    time t_p(8,15,30);
    //15 min
    //8:00:30
    t_p.printTime();
    //t_p.min=00; //error
    t_p.setMin(0);
    t_p.printTime();
    //int s=t_p.sec; //error
    int s=t_p.getSec();
    //printf("\n sec=%d",s);
    cout<<"\n sec="<<s;

    
    // //9:30:45
    // time t_s(9,30,45);
    // t_s.printTime();

    return 0;
}
