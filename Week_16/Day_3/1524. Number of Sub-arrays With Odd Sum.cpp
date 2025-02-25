class Solution {
    public:
        int numOfSubarrays(vector<int>& arr) {
    
            const int MOD = 1e9 + 7;
            int re=0, presum=0, odd=0, even=1;
            int n = arr.size();
    
            for(int i=0; i<n; i++)
            {
                presum += arr[i];
                if(presum%2 == 0){
                    re = (re + odd) % MOD;
                    even++;
                }
                else
                {
                    re = (re + even) % MOD;
                    odd++;
                }
            }
    
            return re;
        }
    };