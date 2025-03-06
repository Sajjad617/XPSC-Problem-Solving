class Solution {
    public:
        int findDuplicate(vector<int>& nums) {
            map<int, int> mp;
            int v = 0;
            for(auto x : nums)
            {
                mp[x]++;
                if(mp[x]==2)
                {
                    v = x;
                }
            }
            return v;
        }
    };