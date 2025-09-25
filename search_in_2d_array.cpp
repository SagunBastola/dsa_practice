#include<vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int str=0;
        int midr;
        int endr=matrix.size()-1;
        int stc=0;
        int midc;
        int endc;
        if(matrix.size()==1 && matrix[0].size()==1)
        {
            if(target==matrix[0][0])
            {
                return true;
            }
            return false;
        }
        stc=0;
        endc=matrix[0].size()-1;
        if(matrix.size()==1)
        {
            while(stc<=endc)
                {
                    midc=stc+(endc-stc)/2;
                    if(matrix[0][midc]==target)
                    {
                        return true;
                    }
                    else if(matrix[0][midc]<target)
                    {
                        stc=midc+1;
                    }
                    else
                    {
                        endc=midc-1;
                    }
                }
                return false;
        }
        while(str<=endr)
        {  
            stc=0;
            midr=str+(endr-str)/2;
            endc=matrix[midr].size()-1;
            if(matrix[midr][0]<=target && matrix[midr][endc]>=target)
            {
                while(stc<=endc)
                {
                    midc=stc+(endc-stc)/2;
                    if(matrix[midr][midc]==target)
                    {
                        return true;
                    }
                    else if(matrix[midr][midc]<target)
                    {
                        stc=midc+1;
                    }
                    else
                    {
                        endc=midc-1;
                    }
                }
                return false;
            }
            else if(matrix[midr][0]>target)
            {
                endr=midr-1;
            }
            else
            {
                str=midr+1;
            }
        }
        return false;
    }
};