class Solution {
    public:
        vector<int> diStringMatch(string s) {
            vector<int> v;
            int l = 0, r = s.size();
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='I')
                    v.push_back(l++);
                if(s[i]=='D')
                    v.push_back(r--);
            }
            v.push_back(l);
            return v;
        }
    };