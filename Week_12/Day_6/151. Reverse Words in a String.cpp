class Solution {
public:
    string reverseWords(string s) {
        vector<string> v;
        string ss = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                v.push_back(ss);
                ss = "";
            } else {
                ss += s[i];
            }
        }
        if (s.back() != ' ')
            v.push_back(ss);
        ss = "";
        for (int i = v.size() - 1; i >= 0; i--)
        {   
            if(v[i].size()!=0)
            {
                ss += v[i];
                ss += ' ';
            }
            
        }
        ss.pop_back();

        return ss;
    }
};