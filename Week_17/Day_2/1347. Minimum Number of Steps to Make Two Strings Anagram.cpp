class Solution {
    public:
        int minSteps(string s, string t) {
            vector<int> v(26, 0);
            for(auto x : s)
            {
                v[x-'a']++;
            }
            int cnt = 0;
            for(auto x : t)
            {
                if(--v[x-'a'] < 0)
                    cnt++;
            }
            return cnt;
        }
    };