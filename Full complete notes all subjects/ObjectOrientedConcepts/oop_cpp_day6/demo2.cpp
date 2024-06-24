#include<iostream>
using namespace std;
//person => base
//person => parent
class person
{
    protected:
	    string name;
	    int age;
    public:
    person()
    {
        name="Ravi";
        age=30;
    }
    void  printPerson()
    {
        cout<<"\n name="<<name<<" age="<<age;
    }
};
//emp is a person
//emp=> derived 
//emp=> child
class emp: public person
{
    private:
        int empid;
        int sal;
    public:
    emp()
    {
        empid=120;
        sal=20000;
    }
    void printEmp() //=4
    {
        this->printPerson(); //2
        cout<<" empid="<<empid <<"  sal="<<sal;
    }
    void updateName(string newName)
    {
        this->name=newName;
    }
};

int main()
{
    // person p1;
    // p1.printPerson();
    emp e1;
    e1.printEmp();

    //ravi  ==> ravee
   //e1.name="ravee"; error
   e1.updateName("ravee");
   e1.printEmp();

    cout<<"\n";
    return 0;
}