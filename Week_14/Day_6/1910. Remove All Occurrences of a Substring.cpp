class Solution {
    public:
        string removeOccurrences(string s, string part) {
            // string ns = "";
            if(s.size() < part.size())
                return s;
            // while(s1.find(s2) >=0 && s1.find(s2) <= s1.size())
            
            while(s.find(part) >=0 && s.find(part) <= s.size())
            {
                int n = part.size();
                int x = s.find(part);
                s.erase((s.begin()+x), (s.begin()+x+n));
                if(s.find(part) > s.size())
                    break;
                // cout << s1 << endl;
            }
            return s;
        }
    };