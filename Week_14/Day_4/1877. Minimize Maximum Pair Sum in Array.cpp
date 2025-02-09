class Solution {
    public:
        int minPairSum(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int l = 0;
            int r = nums.size()-1;
            int mx = 0;
            while(l<r)
            {
                mx = max(mx, (nums[l]+nums[r]));
                r--, l++;
            }
            return mx;
        }
    };