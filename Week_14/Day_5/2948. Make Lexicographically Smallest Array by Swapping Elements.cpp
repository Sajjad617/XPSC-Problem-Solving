class Solution {
    public:
        vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {
            int n = nums.size();
            int cnt = 0;
            vector<pair<int, int>> cpy;
            for(int i=0; i<n; i++)
                cpy.push_back({nums[i], i});
            
            sort(cpy.begin(), cpy.end());
            int l = 0, r = 1;
            while(r<n)
            {
                vector<int> pos = {cpy[l].second};
                while(r<n && abs(cpy[r].first-cpy[r-1].first <= limit))
                {
                    pos.push_back(cpy[r].second);
                    r++;
                }
                sort(pos.begin(), pos.end());
    
                for(int i=0; i<r-l; i++)
                {
                    nums[pos[i]] = cpy[l+i].first;
                } 
                l = r;
                r++;
            }
            return nums;
        }
    };