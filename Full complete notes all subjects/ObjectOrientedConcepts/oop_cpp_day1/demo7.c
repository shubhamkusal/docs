#include<stdio.h>

//Structure is a collection of similar or dissimilar data.
// It is used to bind logically related data into a single unit.


struct time
{
    int hr;
    int min;
    int sec;
};//end of struct time

//call by value
void printTime(struct time t1)
{
    printf("\n time=%d:%d:%d",t1.hr,t1.min,t1.sec);
}

//call by address
void acceptTime(struct time *t1)
{
    printf("\n Enter time");
    scanf("%d%d%d",&t1->hr,&t1->min,&t1->sec);
}
int main()
{
    int n1;
    n1=44;
    struct time t1;
    t1.hr=12;
    t1.min=32;
    t1.sec=34;
    printTime(t1);
    acceptTime(&t1);
    printTime(t1);
    return 0;
}