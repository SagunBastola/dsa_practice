#include <bits/stdc++.h>
using namespace std;
string timeConversion(string s)
{
    string t = "PM";
    bool pm = false;
    int n = s.size();
    if (s.find(t) < s.length())
    {
        pm = true;
    }
    

    string ret = "";
    int h = (s[0] - '0') * 10 + (s[1] - '0');
    if (h == 12 && pm == false)
    {
        h = 00;
    }
    if (pm == true && h != 12)
    {
        h = h + 12;
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (i < 2)
        {

            ret += (h / 10 + '0');
            h = (h % 10) * 10;
            continue;
        }
        ret += s[i];
    }
    return ret;
}
int main()
{
    string s = "12:05:45AM";
    cout << timeConversion(s) << endl;
}