class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            // int n = pattern.size();
            istringstream iss(s);
            vector<string> v;
            while(iss >> s)
                v.push_back(s);
            
            if(pattern.size() != v.size())
                return false;
                
            unordered_map<char, string> mp1;
            unordered_map<string, char> mp2;
            for(int i=0; i<v.size(); i++) 
            {
                char a = pattern[i];
                string b = v[i];
                if((mp1.count(a) && mp1[a]!=b) || (mp2.count(b) && mp2[b] != a))
                {
                    return false;
                }
    
                mp2[b] = a;
                mp1[a] = b;
            }
            return true;
        }
    };