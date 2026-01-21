#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin>>n>>m;
    vector<int> visited(n+1,0);
    vector<vector<int>> vec(n + 1);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        vec[v].push_back(u);
        vec[u].push_back(v);
    }
    int starting_node;
    cin >> starting_node;
    queue<int> q;
    q.push(starting_node);
    visited[starting_node] = 1;
    while (!q.empty())
    {
        cout << q.front() <<" ";
        int a=q.front();
        for (int i = 0; i < vec[a].size(); i++)
        {
            if (visited[vec[a][i]] != 1)
            {
                q.push(vec[a][i]);
                visited[vec[a][i]]=1;
            }
            
        }
        q.pop();
    }
}