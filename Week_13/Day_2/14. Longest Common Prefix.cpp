class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string s = strs[0];
        string ns = "";
        if(n==0)
            return ns;
        int c = 0;
        while(c < s.size())
        {
            for(int i=0; i<n; i++)
            {
                if(c >= strs[i].size() || strs[i][c] != strs[0][c])
                    return strs[0].substr(0, c);
            }
            c++;
        }
        
        return strs[0].substr(0, c);
    }
};