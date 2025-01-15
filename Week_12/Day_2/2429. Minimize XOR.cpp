class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int ans = 0, tb = __builtin_popcount(num2);
        for(int i = 31; i>=0 && tb > 0; i--)
        {
            if(num1 & (1 << i))
            {
                ans = ans | (1 << i);
                tb--;
            }
        }
        for(int i = 0; i<=31 && tb > 0; i++)
        {
            if(!(num1 & (1 << i)))
            {
                ans = ans | (1 << i);
                tb--;
            }
        }
        return ans;
    }
};