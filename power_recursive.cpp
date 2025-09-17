#include<iostream>
using namespace std;

int pow(int a, int b)
{   
    if(b == 0) return 1;       // base case
    int val = pow(a, b/2);
    int ans = val * val;
    if(b % 2 == 1)             // odd case needs one more 'a'
    {
        return ans * a;
    }
    return ans;
}

int main()
{
    cout << pow(2,3.1) << endl;   // prints 8
    return 0;
}
