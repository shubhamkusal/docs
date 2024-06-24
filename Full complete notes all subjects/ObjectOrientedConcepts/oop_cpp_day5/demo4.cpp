#include<iostream>
using namespace std;
//Association [has-a] 

///car has-a engine

class engine
{
    int fuel;
    int cc;
    public:
    void acceptEngineData()
    {
        cout<<"\n enter engine cc and fuel";
        cin>>this->cc>>this->fuel;
    }
    void printEngineData()
    {
        cout<<"\n engine info cc="<<cc<<"  fuel ="<<fuel;
    }
};
class car
{
    int price;
    engine e1; //object of engine // Association
    public:
    void acceptCar()
    {
        cout<<"\n enter car price";
        cin>>this->price;
        this->e1.acceptEngineData();
    }
    void printCar()
    {
        cout<<"\n car info price="<<this->price;
        this->e1.printEngineData();
    }
};
int main()
{
    // engine e1;
    // e1.acceptEngineData();
    // e1.printEngineData();

    car c1;
    c1.acceptCar();
    c1.printCar();
    cout<<"\n";
    return 0;
}