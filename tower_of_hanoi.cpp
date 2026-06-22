#include <bits/stdc++.h>
using namespace std;

void toh(int n, string start, string middle, string end)
{
    // base case
    if (n <= 0)
    {
        return;
    }

    // first recursive call i.e. for (n-1)th position ring changing the location of end point
    toh(n - 1, start, end, middle);

    // printing
    cout << n << "th ring " << start << " pole to " << end << " pole" << endl;

    // backtracking
    toh(n - 1, middle, start, end);
}

int main()
{
    //input
    int n;
    cin>>n;

    // function call
    toh(n,"A","B","C");

    return 1;
}