class Solution {
    public:
        bool canAliceWin(vector<int>& nums) {
            int dd=0, d=0;
            for(auto x : nums)
            {
                if(x<10)
                    d += x;
                else
                    dd += x;
            }
            if(d==dd)
                return false;
            return true;
        }
    };