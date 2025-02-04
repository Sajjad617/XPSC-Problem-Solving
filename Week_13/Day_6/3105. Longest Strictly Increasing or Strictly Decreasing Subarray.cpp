class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int l = 1, n = nums.size();
        int cnt = 1;
        for(int i=1; i<n; i++)
        {
            if(nums[i-1] > nums[i])
                cnt = max(cnt, ++l);
            else
            {
                l = 1;
            }
        }
        l = 1;
        for(int i=1; i<n; i++)
        {
            if(nums[i-1] < nums[i])
                cnt = max(cnt, ++l);
            else
            {
                l = 1;
            }
        }
        
        return cnt;
    }
};