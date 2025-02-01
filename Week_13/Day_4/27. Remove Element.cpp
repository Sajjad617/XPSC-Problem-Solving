class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int cnt = 0;
        int l = -1;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=val)
            {
                l++;
                nums[l] = nums[i];
            }

        }
        if(l==-1)
            return 0;
        return l+1;
    }
};