#include<vector>
#include<iostream>
using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max1=0;
    if(keyboards.size()==1 && drives.size()==1)
    {
        if(keyboards[0]+drives[0]<b)
        {
        return keyboards[0]+drives[0];
        }
        else
        {
            return -1;
        }
    }
    int i=0;
    int j=drives.size()-1;
    while(i<keyboards.size() && j>=0)
    {
        int sum=keyboards[i]+drives[j];
        if(sum>b)
        {
            j--;
        }
        else
        {
            max1=max(sum,max1);
            i++;
        }
    }
    if(max1>0 && max1<=b)
    {
        return max1;
    }
    else
    {
        return -1;
    }
    
        

}