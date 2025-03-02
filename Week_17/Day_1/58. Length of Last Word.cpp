class Solution {
    public:
        int lengthOfLastWord(string s) {
            int n = s.size();
            int cnt= 0;
            bool flag = false;
            for(int i=n-1; i>=0; i--)
            {
                if(flag)
                {
                    if(s[i]==' ')
                        break;
                    else
                    {
                        cnt++;
                    }
                }
                else
                {
                    if((s[i] >= 'a' && s[i]<='z') || (s[i] >= 'A' && s[i]<='Z'))
                    {
                        cnt++;
                        flag = true;
                    }
                }
            }
            return cnt;
        }
    };