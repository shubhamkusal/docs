#include<stdio.h>

struct time
{
    private:
    //private: Accessible only within the struct
    int hr;
    int min;
    int sec;
    public:
    //public: Accessible within & outside struct
    void printTime()
    {
        printf("\n time=%d:%d:%d",hr,min,sec);
    }
    void acceptTime()
    {
        printf("\n Enter time");
        scanf("%d%d%d",&hr,&min,&sec);
    }
};//end of struct time
int main()
{
    int n1;
    n1=44;
    struct time t1;
   // t1.hr=12;
   // t1.min=32;
   // t1.sec=34;
   // t1.printTime();
    t1.acceptTime();
   // t1.hr=23;
    t1.printTime();
    return 0;
}
