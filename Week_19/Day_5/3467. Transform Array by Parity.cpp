class Solution {
    public:
        vector<int> transformArray(vector<int>& nums) {
            for(auto& x : nums)
            {
                if(x%2==0)
                    x = 0;
                else
                    x= 1;
            }
            sort(nums.begin(), nums.end());
            return nums;
        }
    };