class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int res = nums[0];
        int x = nums[0];
        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1] < nums[i])
            {
                x += nums[i];
            }
            else
            {
                
                x = nums[i];

            }
            res = max(res, x);
        }
        return res;
    }
};