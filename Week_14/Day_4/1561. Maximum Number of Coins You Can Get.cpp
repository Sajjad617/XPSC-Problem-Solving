class Solution {
    public:
        int maxCoins(vector<int>& piles) {
            sort(piles.begin(), piles.end());
            long long cnt = 0;
            int n = piles.size()/3;
            int l = piles.size()-2;
            while(n--)
            {
                cnt += piles[l];
                l -= 2;
            }
            return cnt;
        }
    };