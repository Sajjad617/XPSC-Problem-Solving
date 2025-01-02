class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int sz = nums.size();
        vector<int> v(sz);
        for(int i = 0; i<sz; i++)
        {
            v[i] = nums[nums[i]];
        }
        return v;
    }
};