class Solution {
    public:
        bool done(int x, int target)
            {
                if(x==target)
                    return true;
                if(target < 0 || target > x)
                    return false;
                
                return done(x/10, target - (x%10)) || done(x/100, target - (x%100)) || done(x/1000, target - (x%1000));
            }
        int punishmentNumber(int n) {
            
            int sum =0;
            for(int i=1; i<=n; i++)
            {
                int cal = i*i;
                if(done(cal, i))
                    sum += i*i;
            }
            return sum;
        }
    };