class Solution {
public:
    int reverse(int x) {
        int n = 0;
        while(x!=0)
        {
            int cal = x%10;
            x = x/10;
            if(n<INT_MIN/10 || n>INT_MAX/10)
                return 0;
            n = 10*n+cal;
            
        }
        return n;
    }
};