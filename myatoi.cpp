#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int helper(string s,int i,long long num,int sign)
    {
        if(i>=s.size() || !isdigit(s[i]))
        {
            return (int)num*sign;
        }
        num=num*10+(s[i]-'0');
        i++;
        if(sign*num >=INT_MAX)
        {
            return (int)INT_MAX;
        }
        if(sign*num<=INT_MIN)
        {
            return (int)INT_MIN;
        }
        return helper(s,i,num,sign);
    }
    int myAtoi(string s, int i = 0) {

        while (i < s.size() && s[i] == ' ') {
            i++;
        }
        int sign = 1;
        if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
            if (i < s.size() && s[i] == '+') {
            i++;
            }
            else{
            sign = sign * -1;
            i++;}
        }
        
        return helper(s,i,0,sign);
    }
};
int main()
{
    string s;
    s="    -12345cd34";
    Solution s1;
    cout<<s1.myAtoi(s);

}