class Solution {
    public:
        int subtractProductAndSum(int n) {
            int sum = 0;
            int mul = 1;
            while(n!=0)
            {
                int x = n%10;
                sum += x;
                mul *= x;
                n = n/10;
            }
            return mul-sum;
        }
    };