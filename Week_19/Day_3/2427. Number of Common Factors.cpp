class Solution {
    public:
        int commonFactors(int a, int b) {
            int re  = 1;
            int cmmn = __gcd(a, b);
            for(int i=2; i<=cmmn; i++)
            {
                if(a%i==0 && b%i==0)
                    re++;
            }
            return re;
        }
    };