#include<iostream>
#include<vector>

using namespace std;
int main()
{
    vector<int> vec={1,2,3,4,5,6};//noofdata value
    while(!vec.empty())
    {
        cout<<vec.back()<<endl;
        vec.pop_back();
    }
    vector<int> vec1={1,2,3};
    cout<<vec1.size()<<endl;
    cout<<vec1.capacity()<<endl;
    vec1.push_back(4);
    cout<<vec1.size()<<endl;
    cout<<vec1.capacity()<<endl;
    cout<<vec1[3]<<endl;
    cout<<endl<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    cout<<vec1.capacity()<<endl;
    vec1.erase(vec1.begin()+1,vec1.begin()+3);
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    cout<<vec1.capacity()<<endl;
    vec1.insert(vec1.begin(),56);
    cout<<endl;
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    vector<int>:: iterator it;
    for(it=vec1.begin();it!=vec1.end();it++)
    {
        cout<<" "<<*it;
    }
    cout<<endl;
    for(auto it1=vec1.rbegin();it1!=vec1.rend();it1++)
    {
        cout<<" "<<*it1;
    }
    return 0;

}