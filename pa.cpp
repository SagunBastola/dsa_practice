#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
class Solution
{
public:
    int maxPartitionFactor(vector<vector<int>> &points)
    {
        if(points.size()==0)
        {
            return 0;
        }
        if (points.size() == 1)
        {
            return 0;
        }
        if (points.size() == 2)
        {
            return abs(points[0][0] - points[1][0]) + abs(points[1][1] - points[0][1]);
        }
        int ans=0;
        for(int i=0;i<points.size()-1;i++)
            {
                int cap=0;
                for(int j=i+1;j<points.size();j++)
                    {
                        cap=abs(points[i][0] - points[j][0]) + abs(points[i][1] - points[j][1]);
                        ans=max(ans,cap);
                    }
            }
        return ans;
    }
};