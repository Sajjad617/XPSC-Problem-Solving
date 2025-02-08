class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        while(k!=0)
        {
            int x = *min_element(nums.begin(), nums.end());
            auto it = find(nums.begin(), nums.end(), x);
            int idx = it - nums.begin();
            nums[idx] = nums[idx]*multiplier;
            k--;
        }
        return nums;
    }
};