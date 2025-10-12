#include<iostream>
using namespace std;
int main()
{
    int a;
    while(true)
    {
        cout<<"enter the value of a: ";
        cin>>a;
        if(cin.good())
        {
            cin.ignore(10,'\n');
            break;


        }
        cin.clear();
        cout<<"error in input"<<endl;
        cin.ignore(10,'\n');
    }
    cout<<a;
}