#include<stdio.h>
class time
{
    private:
    //private: Accessible only within the class
    int hr; //4
    int min; //4
    int sec;  //4
    public:
    //public: Accessible within & outside class
    void printTime()
    {
        printf("\n time=%d:%d:%d",this->hr,this->min,this->sec);
    }
    //If we call member function on object then compiler 
    //implicitly pass address of that object as a 
    //argument to the function implicitly call as this pointer.
    void acceptTime()
    {
        printf("\n Enter time");
        scanf("%d%d%d",&this->hr,&this->min,&this->sec);
    }
};//end of class time
int main()
{
    //time is class   -- t1-> object
    time t1;
    printf("\n size of t1 object=%d",sizeof(t1));
    t1.acceptTime();
    t1.printTime();

    time t2;  //t2-> object
    t2.acceptTime();
    t2.printTime();

    time t3; //t3 -> object
    t3.acceptTime();
    t3.printTime();

    return 0;
}
