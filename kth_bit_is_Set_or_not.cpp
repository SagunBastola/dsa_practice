#include<bits/stdc++.h>
using namespace std;
class Solution
{
    public:
    bool checkIthBit(int num,int bitidx)
    {
        string binary="";
        while(num>0)
        {
            if(num%2 ==0)
            {
                binary+="0";
            }
            else{
                binary+='1';
            }
            num=num/2;
        }
        if(binary.size()<bitidx)
        {
            return false;
        }
        return binary[bitidx-1]=='1';
    }
};
int main() {
    Solution sol;
    int num = 15;  // Binary: 101
    int bitIndex = 2;  // Check the 2nd bit (0-based index)

    if (sol.checkIthBit(num, bitIndex)) {
        cout << "The " << bitIndex << "-th bit of " << num << " is set (1)." << endl;
    } else {
        cout << "The " << bitIndex << "-th bit of " << num << " is not set (0)." << endl;
    }

    return 0;
}