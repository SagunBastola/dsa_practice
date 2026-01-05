#include<bits/stdc++.h>
using namespace std;
int birthday(vector<int> candles)
{
    int high=candles[0];
    int count=0;
    int n=candles.size();
    for(int i=0;i<n;i++)
    {
        high=max(high,candles[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(high == candles[i])
        {
            count++;
        }
    }
    return count;
}