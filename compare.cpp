#include<iostream>
#include<map>
using namespace std;
int main()
{
    int t1;
    cin>>t1;
    for(int i=0;i<t1;i++)
    {
        string s;
        string t;
        int n;
        cin>>n;
        cin>>s>>t;
        map<char,int> ms;
        for(int i=0;i<n;i++)
        {
            ms[s[i]]++;
        }
        map<char,int> mt;
        for(int i=0;i<n;i++)
        {
            mt[t[i]]++;
        }
        bool ta=false;
        for(char i='a';i<='z';i++)
        {
            if(ms[i] != mt[i])
            {
                ta=true;
            }
        }
        if(ta)
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}