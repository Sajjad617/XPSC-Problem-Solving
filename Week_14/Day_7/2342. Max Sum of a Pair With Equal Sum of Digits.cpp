class Solution {
    public:
        int maximumSum(vector<int>& nums) {
            // int v[20]{};
            vector<int> v(100);
            int ans = -1;
            for(int x : nums)
            {
                int sum = 0;
                int val = x;
                while(val)
                {
                    sum += val%10;
                    val /= 10;
                }
                if (v[sum])
                    ans = max(ans, v[sum]+x);
                
                v[sum] = max(v[sum],  x);
            }
            return ans;
        }
    };