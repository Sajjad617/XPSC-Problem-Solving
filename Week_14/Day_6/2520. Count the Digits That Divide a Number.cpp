class Solution {
    public:
        int countDigits(int num) {
            int cpy = num;
            vector<int> v;
            // v.push_back(cpy);
            int cnt =0;
            while(cpy != 0)
            {
                int x = cpy%10;
                cpy /= 10;
                v.push_back(x);
            }
            for(auto x : v)
            {
                if(num%x==0)
                    cnt++;
            }
            return cnt;
        }
    };