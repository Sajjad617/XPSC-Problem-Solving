class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int cal = 0;
        for(int x = 0; x <nums.size(); x++)
        {
            if(__builtin_popcount(x)==k)
                cal += nums[x];
        }
        return cal;
    }
};