class Solution {
    public:
        int removeDuplicates(vector<int>& nums) {
            int cnt = 1;
            int l = 0;
            for(int i=1; i<nums.size(); i++){
                if(nums[l]!=nums[i])
                {
                    l++;
                    nums[l] = nums[i];
                    cnt++;
                }
            }
            return cnt;
        }
    };