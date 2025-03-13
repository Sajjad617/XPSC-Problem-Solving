class Solution {
    public:
        int maximumCount(vector<int>& nums) {
            int po = nums.end()-lower_bound(nums.begin(), nums.end(), 1);
            int neg = lower_bound(nums.begin(), nums.end(), 0)-nums.begin();
            return max(neg, po);
        }
    };