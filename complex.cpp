#include <iostream>
using namespace std;
class complex
{
private:
    int real;
    int imag;

public:
    void getdata(int a,int b)
    {
        real=a;
        imag=b;
    }
    void showdata()
    {
        cout << real << " " << imag << endl;
    }
};
class base
{
public:
    virtual void show()
    {
        cout << "inside base class" << endl;
    }
    virtual ~base()
    {
        cout << "base class destructor";
    }
};
class derived : public base
{
public:
    void happer()
    {
        cout << "hapy";
    }
    void show()
    {
        cout << "inside derivedd class" << endl;
    }
    ~derived()
    {
        cout << "Derived class";
    }
};
class cordinate
{
private:
    int x;
    int y;

public:
    void getdata()
    {
        cout << "enter the x and y";
        cin >> x >> y;
    }
    void showdata()
    {
        cout << x << " " << y << endl;
        cout << "cordinate";
    }
};
int main()
{
    complex *c1 = new complex;
    cordinate *d1 = new cordinate;
    c1->getdata(2,3);
    base *b = new derived; // Use a derived object
    b->show();
    derived *d = dynamic_cast<derived *>(b);
    if (d)
    {
        d->show(); // safe call
    }
    cout<<typeid(d1).name()<<endl;
    d1 = reinterpret_cast<cordinate*>(c1);
    cout<<typeid(d1).name();
    d1->showdata();
    return 0;
}