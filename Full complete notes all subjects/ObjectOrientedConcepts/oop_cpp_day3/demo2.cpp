#include<stdio.h>

int g=11;
namespace ns1
{
    int connector=3703;
    namespace nns
    {
        int db=220;
    }
}
namespace ns2
{
    int connector=4003;
    int num1=11;
    int num2=12;
    int num3=13;
    int num4=14;
    int num5=15;
    int num6=16;
}


int main()
{
    printf("\n g=%d",g);
    printf("\n g=%d",::g);
    printf("\n ns1::connector=%d",ns1::connector);
    printf("\n ns1::nns::db=%d",ns1::nns::db);

    using namespace ns2;
    printf("\n num1=%d",num1);
     printf("\n num6=%d",num6);
    printf("\n");
    return 0;
}
