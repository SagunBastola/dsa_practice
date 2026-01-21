#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>>& vec,int node,vector<int>& visited)
{
    visited[node]=1;
    cout<<node<<endl;
    for(auto it : vec[node])
    {
        if(!visited[it])
        {
            dfs(vec,it,visited);
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> visited(n + 1, 0);
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
    dfs(vec,starting_node,visited);
}
