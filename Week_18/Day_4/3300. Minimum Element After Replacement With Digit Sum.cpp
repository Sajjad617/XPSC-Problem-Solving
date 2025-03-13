class Solution {
    public:
        int minElement(vector<int>& nums) {
            int mx = INT_MAX;
            for(auto x : nums)
            {
                int cal = 0;
                while(x!=0)
                {
                    cal += x%10;
                    x /= 10;
                }
                mx = min(mx, cal);
            }
            return mx;
        }
    };