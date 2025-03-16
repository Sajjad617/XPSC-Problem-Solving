class Solution {
    public:
        int maximizeSum(vector<int>& nums, int k) {
            int mx = *max_element(nums.begin(), nums.end());
            int total = 0;
            while(k)
            {
                total += mx++;
                k--;
            }
            return total;
        }
    };