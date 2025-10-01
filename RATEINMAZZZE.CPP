#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

class Solution {
  public:
    void helper(vector<vector<int>>& maze,int r,int c,string path,vector<string>& ans)
    {
        int n=maze.size();
        if(r<0 || c<0 || r>=n || c>=n || maze[r][c]==0 || maze[r][c]== -1)
        {
            return;
        }
        if(maze[r][c]==1 && r==n-1 && c==n-1)
        {
            ans.push_back(path);
        }
        maze[r][c]=-1;
        //down
        helper(maze,r+1,c,path+"D",ans);
        //UP
        helper(maze,r-1,c,path+"U",ans);
        //RIGHT
        helper(maze,r,c+1,path+"R",ans);
        //LEFT
        helper(maze,r,c-1,path+"L",ans);
        maze[r][c]=1;
        
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        vector<string> ans;
        string path;
        helper(maze,0,0,path,ans);
        return ans;
    }
};