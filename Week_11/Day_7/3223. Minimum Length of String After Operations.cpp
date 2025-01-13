class Solution {
public:
    int minimumLength(string s) {
        int n = s.size();
        sort(s.begin(), s.end());
        int cnt = 0;
        for(int i=1; i<n-1; i++)
        {
            if(s[i-1]==s[i] && s[i]==s[i+1])
            {
                cnt +=2;
                i++;
            }

        }
        return n-cnt;
    }
};