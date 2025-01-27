class Solution {
public:
    int balancedStringSplit(string s) {
        int cnt = 0, l = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='L')
                l++;
            else
                l--;
            
            if(l==0)
                cnt++;
        }
        return cnt;
    }
};