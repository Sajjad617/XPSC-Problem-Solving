class Solution {
    public:
        int missingNumber(vector<int>& nums) {
            int n = nums.size();
            sort(nums.begin(), nums.end());
            int num = -1;
            for(int i=0; i<n; i++)
            {
                if(nums[i] != i)
                {
                    num = i;
                    break;
                }
            }
            if(num==-1)
                return n;
            return num;
        }
    };