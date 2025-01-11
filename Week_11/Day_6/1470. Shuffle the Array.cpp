class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> v;
        int l = 0, r = n;
        while(r != nums.size())
        {
            v.push_back(nums[l]);
            v.push_back(nums[r]);
            l++, r++;
        }
        return v;
    }
};