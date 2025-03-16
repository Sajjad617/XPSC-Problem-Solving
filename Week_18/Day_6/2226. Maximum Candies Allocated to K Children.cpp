class Solution {
    public:
        int maximumCandies(vector<int>& candies, long long k) {
            int l = 0,  r= ranges::max(candies);
            while(l < r)
            {
                int mid = (l+r+1) >> 1;
                long long cal=0;
                for(auto x : candies)
                    cal += x/mid;
                
                if(cal >= k)
                    l = mid;
                else
                    r = mid-1;
            }
            return l;
        }
    };