class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int res = INT_MIN;
        for(int i = 0; i<n; i++)
        {
            int m = accounts[i].size();
            int total = 0;
            for(int j=0; j<m; j++)
            {
                total += accounts[i][j];
            }
            res = max(res, total);
        }
        return res;
    }
};