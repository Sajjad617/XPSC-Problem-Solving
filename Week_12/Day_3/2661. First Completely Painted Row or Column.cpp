class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<pair<int, int>> sprt(m*n+1);
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                sprt[mat[i][j]] = make_pair(i, j);
            }
        }
        vector<int> rc(m, 0);
        vector<int> cc(n, 0);
        for(int i=0; i<m*n; i++)
        {
            pair<int, int> crdnt = sprt[arr[i]];
            int x = crdnt.first;
            int y = crdnt.second;
            rc[x]++;
            cc[y]++;
            if(rc[x]==n || cc[y]==m)
                return i;
        }
        return 0;
    }
};