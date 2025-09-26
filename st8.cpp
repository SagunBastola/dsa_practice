#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<string,int> m={{"ch",12},{"sh",15}};
    m["dh"]=5;
    for(auto m1: m)
    {
        cout<<m1.first<<" "<<m1.second<<endl;
    }
    cout<<m.count("c")<<endl;
    if(m.find("ch")!=m.end())
    {
        cout<<"found"<<endl;
    }
    return 0;
}