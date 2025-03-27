class Solution {
    public:
        int minimumIndex(vector<int>& nums) {
            unordered_map<int, int> mp1;
            unordered_map<int, int> mp2;
            for(auto x : nums)
            {
                mp2[x]++;
            }
            for(int i=0; i<nums.size(); i++)
            {
                int cal1 = ++mp1[nums[i]];
                int cal2 = --mp2[nums[i]];
                if(cal1*2>i+1 && cal2*2>nums.size()-1-i)
                    return i;
            }
            return -1;
        }
    };