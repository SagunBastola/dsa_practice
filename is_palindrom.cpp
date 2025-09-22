#include<iostream>
using namespace std;

class Solution {
public:
    bool isalphanum(char c)
    {
        if((c>='0' && c<='9') || (tolower(c)>='a' && tolower(c)<='z'))
        {
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int start=0;
        int end=s.length();
        while(start<end)
        {
            if(!isalphanum(s[start]))
            {
                start++;
                continue;
            }
            if(!isalphanum(s[end]))
            {
                end--;
                continue;
            }
            if(tolower(s[start])!=tolower(s[end]))
            {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};