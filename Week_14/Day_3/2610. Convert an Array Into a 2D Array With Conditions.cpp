class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        int n = nums.size();
        vector<int> v(n+1);
        for(int i=0; i<n; i++)
        {
            v[nums[i]]++;
        }
        for(int i = 1; i <= n; i++)
        {
            int x = v[i];
            for(int j=0; j<x; j++)
            {
                if(res.size() <= j)
                {
                    res.push_back({});
                }               
                res[j].push_back(i);
            }
        }
        return res;
        
    }
};