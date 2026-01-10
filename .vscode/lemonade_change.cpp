#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(int i=0;i<bills.size();i++)
        {
            if(bills[i] == 5)
            {
                five++;
            }
            else if(bills[i] == 10)
            {
                ten++;
                if(five)
                {
                    five--;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(ten>=1 && five>=1)
                {
                    ten--;
                    five--;
                }
                else if(five>=3)
                {
                    five=five-3;
                }
                else
                {
                    return false;
                }
            }

        }
        return true;
    }
};
int main()
{
    vector<int> v={5,5,10,20};
    Solution s1;
    cout<<s1.lemonadeChange(v);
    return 0;

}