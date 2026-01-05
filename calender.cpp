#include<bits/stdc++.h>
using namespace std;
bool julianleap(int year)
{
    return (year%4)==0;
}
bool georgeleap(int year)
{
    return (year%400)==0 ||( year%4 ==0 && year%100 !=0);
}
string dayOfProgrammer(int year) {
    if(year<1917)
    {
        if(julianleap(year))
        {
            return "12.09."+to_string(year);
        }
        else
        {
            return "13.09."+to_string(year);
        }
    }
    else if(year == 1917)
    {
        return  "26.09."+to_string(year);
    }
    else
    {
        if(georgeleap(year))
        {
            return "12.09."+to_string(year);
        }
        else
        {
            return "13.09."+to_string(year);
        }
    }
}