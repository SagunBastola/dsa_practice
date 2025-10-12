#include<iostream>
using namespace std;
class base
{
    public:
    virtual void show()
    {
        cout<<"inside base class";
    }
    virtual ~base()
    {
        cout<<"base class destructor";

    }
};
class derived:public base
{
    public:
    void happer()
    {
        cout<<"hapy";
    }
    void show()
    {
        cout<<"inside derivedd class";
    }
    ~derived()
    {
        cout<<"Derived class";
    }
};
int main()
{
    base* b;
    b=new derived;
    b->show();
    delete b;
    return 0;
}