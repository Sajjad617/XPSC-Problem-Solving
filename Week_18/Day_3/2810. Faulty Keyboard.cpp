class Solution {
    public:
        string finalString(string s) {
            string ns = "";
            for(int i=0;i<s.size();i++)
            {
                if(s[i]=='i')
                {
                    reverse(ns.begin(), ns.end());
                    continue;
                }
                ns.push_back(s[i]);
            } 
            return ns;
        }
    };