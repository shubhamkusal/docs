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
    virtual void accept()
    {
        cout<<"\n enter name and age";
        cin>>name>>age;
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
    void accept() //4
    {
        person::accept();//2
        cout<<"\n enter empid and sal";
        cin>>empid>>sal;
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
    // pptr->accept();
    // pptr->printPerson();


    // emp e1;
    // emp *eptr=NULL;
    // eptr=&e1;
    // eptr->printEmp();  //4
    // eptr->accept();  //4
    // eptr->printEmp(); //4


    emp e1;
    person *pptr=NULL;
    pptr=&e1;  // no error  base class pointer can hold address of derived class obj
    pptr->printPerson(); //2
    pptr->accept();  //4 ->emp    2->person
    pptr->printPerson();//2
    


    //  person p1;
    //  emp e1;
    //  p1=e1; //object slicing


    cout<<"\n";
    return 0;
}