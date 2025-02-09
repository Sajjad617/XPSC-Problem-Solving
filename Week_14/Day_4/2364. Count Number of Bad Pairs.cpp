class Solution {
    public:
        long long countBadPairs(vector<int>& nums) {
            long long n = nums.size();
            long long cnt= 0;
            unordered_map<int, int> unomp;
            for(int i=0; i<n; i++)
            {
                if(unomp.count(nums[i]-i))
                    cnt += unomp[nums[i]-i];
                unomp[nums[i]-i]++;       
            }
            long long res = ((n*(n-1))/2) - cnt;
            return res;
        }
    };