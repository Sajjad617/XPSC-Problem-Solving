class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int cnt = 0;
        for(auto x : nums)
        {
            if(x < k)
                cnt++;
        }
        return cnt;
    }
};