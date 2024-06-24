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
    // person *pptr=NULL;
    // pptr=&p1;
    // pptr->printPerson();


    // emp e1;
    // emp *eptr=NULL;
    // eptr=&e1;
    // eptr->printPerson(); //2
    // eptr->updateName("ravee");
    // eptr->printEmp();  //4


    emp e1;
    person *pptr=NULL;
    pptr=&e1;  // no error  base class pointer can hold address of derived class obj
    pptr->printPerson();



    cout<<"\n";
    return 0;
}