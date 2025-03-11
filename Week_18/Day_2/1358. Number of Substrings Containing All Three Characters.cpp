class Solution {
    public:
        int numberOfSubstrings(string s) {
            int ls[3] = {-1, -1, -1};
            int cal = 0;
            for(int i=0; i<s.size(); i++)
            {
                ls[s[i]-'a'] = i;
                cal += min(ls[0], min(ls[1], ls[2]))+1;
            }
            return cal;
        }
    };