class Solution {
    public:
        string firstPalindrome(vector<string>& words) {
            string s = "";
            for(auto x : words)
            {
                int r = x.size();
                r--;
                int l = 0;
                bool flag = true;
                while(l<=r)
                {
                    if(x[l] != x[r])
                    {
                        flag = false;
                        break;
                    }
                    l++;
                    r--;
                }
                if(flag)
                {
                    s = x;
                    break;
                }
            }
            return s;
        }
    };