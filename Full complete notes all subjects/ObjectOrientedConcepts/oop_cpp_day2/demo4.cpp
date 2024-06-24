#include<stdio.h>
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
        printf("\n ----- time()----");
        this->hr=0;
        this->min=0;
        this->sec=0;
    }
    time(int h,int m,int s) //Parameterized constructor
    {
        printf("\n ----- time(int,int,int)----");
        this->hr=h;
        this->min=m;
        this->sec=s;
    }
    void initTime()
    {
        this->hr=0;
        this->min=0;
        this->sec=0;
    }
    void printTime()
    {
        printf("\n time=%d:%d:%d",this->hr,this->min,this->sec);
    }
    void acceptTime()
    {
        printf("\n Enter time");
        scanf("%d%d%d",&this->hr,&this->min,&this->sec);
    }
    ~time()  //Destructor : used to release the resources
    {
        printf("\n ------ ~time()------");
    }
};//end of class time
int main()
{
    time t1;
    //t1.initTime();
    t1.printTime();

    //8:15:30
    time t_p(8,15,30);
    t_p.printTime();
    
    //9:30:45
    time t_s(9,30,45);
    t_s.printTime();

    return 0;
}
