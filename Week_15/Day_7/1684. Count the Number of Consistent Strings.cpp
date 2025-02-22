class Solution {
    public:
        int countConsistentStrings(string allowed, vector<string>& words) {
            unordered_map<char, int> mp;
            for(auto x : allowed)
                mp[x] = 1;
            int res = 0;
            for(auto w : words)
            {
                bool flag = true;
                for(auto c : w)
                {
                    if(mp[c]==0)
                        flag = false;
                }
                if(flag)
                    res++;
            }
            return res;
        }
    };