class Solution {
    public:
        bool areOccurrencesEqual(string s) {
            map<char, int> mp;
            for(auto x : s)
                mp[x]++;
    
            set<int> tk;
            for(auto x : mp)
            {
                tk.insert(x.second);
            }
            if(tk.size()==1)
            {
                return true;
            }
            return false;
    
        }
    };