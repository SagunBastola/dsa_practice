#include <bits/stdc++.h>
using namespace std;
int fibo(int n, vector<int> &vec)
{   
    // if previously present
    if (vec[n] != -1)
    {
        return vec[n];
    }

    // base case
    if (n == 0 || n == 1)
    {
        vec[n] = n;
        return n;
    }

    // storing for future use
    vec[n] = fibo(n - 1, vec) + fibo(n - 2, vec);

    // returing
    return vec[n];
}
int main()
{
    int n;
    cin >> n;
    
    //defination of vector for mnemonization
    vector<int> vec(n + 1, -1);
    
    //function call
    fibo(n, vec);

    //fibo number for nth element
    cout << vec[n];
}