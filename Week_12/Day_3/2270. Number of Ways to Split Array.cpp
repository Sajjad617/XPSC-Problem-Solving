class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long n = nums.size();
        vector<long long> v(n);
        // v[n-1] = nums[n-1];
        long long total = 0;
        for(long long i=1; i<n; i++)
        {
            total += nums[i];
        }

        int cnt = 0;
        long long cal = nums[0];
        for(long long i=0; i<n-1; i++)
        {

            if(cal >= total)
                cnt++;
            cal += nums[i+1];
            total -= nums[i+1];
        }
        return cnt;
    }
};