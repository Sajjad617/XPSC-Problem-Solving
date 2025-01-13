class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        vector<int> v;
        int n = grid.size();
        int nn = grid[0].size();
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            if(flag)
            {
                for(int j=0; j<nn; j +=2)
                {
                    v.push_back(grid[i][j]);
                }
                flag = false;
            }
            else
            {
                
                if(nn%2)
                {
                    for(int j=nn-2; j>=0; j -=2)
                    {
                        v.push_back(grid[i][j]);
                    }
                }
                else
                {
                    for(int j=nn-1; j>=0; j -=2)
                    {
                        v.push_back(grid[i][j]);
                    }
                }
                flag = true;
            }
            
        }
        return v;
    }
};