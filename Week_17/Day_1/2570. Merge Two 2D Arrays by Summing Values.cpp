class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            vector<int> v(1001, 0);
            vector<vector<int>> re;
            for(auto x : nums1)
            {
                v[x[0]] += x[1];
            }
            for(auto x : nums2)
            {
                v[x[0]] += x[1];
            }
    
            for(int i=0; i<1001; i++)
            {
                if(v[i])
                    re.push_back({i, v[i]});
    
            }
            return re;
        }
    };