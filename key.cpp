#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include<unordered_map>
using namespace std;
class Solution {
public:
vector<char> getLettersForDigit(int digit) {
    static unordered_map<int, std::vector<char>> keypad = {
        {2, {'a', 'b', 'c'}},
        {3, {'d', 'e', 'f'}},
        {4, {'g', 'h', 'i'}},
        {5, {'j', 'k', 'l'}},
        {6, {'m', 'n', 'o'}},
        {7, {'p', 'q', 'r', 's'}},
        {8, {'t', 'u', 'v'}},
        {9, {'w', 'x', 'y', 'z'}}
        };
        return keypad[digit]; 
    }
    void helper(string digits,vector<string>& ans,string str)
    {
        if(digits.size()==0)
        {
            ans.push_back(str);
            return;
        }
        int a=int(digits[0]);
        vector<char> li= getLettersForDigit(a);
        for(int i=0;i<li.size();i++)
        {
            
            helper(digits.substr(1),ans,str+li[i]);

        }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string str="";
        helper(digits,ans,str);
    }
};