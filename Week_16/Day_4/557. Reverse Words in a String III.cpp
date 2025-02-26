class Solution {
    public:
        string reverseWords(string s) {
            string ns = "";
            string re = "";
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]!=' ')
                    ns.push_back(s[i]);
                else
                {
                    reverse(ns.begin(), ns.end());
                    re += ns;
                    re.push_back(' ');
                    ns = "";
                }
            }
            reverse(ns.begin(), ns.end());
            re += ns;
            return re;
    
            
        }
    };