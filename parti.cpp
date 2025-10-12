#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
class Solution
{
public:
    bool scoreBalance(string s)
    {
        int wholesum = 0;
        for (int i = 0; i < s.size(); i++)
        {
            wholesum += (s[i] - 'a') + 1;
        }
        int leftsum = 0;
        for (int i = 0; i < s.size() - 1; i++)
        {
            leftsum += (s[i] - 'a') + 1;
            if (leftsum == (wholesum - leftsum))
            {
                return true;
            }
        }
        return false;
    }
};