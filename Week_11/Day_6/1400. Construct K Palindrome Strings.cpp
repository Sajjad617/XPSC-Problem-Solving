class Solution {
public:
    bool canConstruct(string s, int k) {
        int n = s.size();
        if(n < k)
            return false;
        map<char, int> mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
        int dc = 0, sc = 0;
        for(auto x : mp)
        {
            // cout << "**";
            if(x.second%2==1)
                sc++;
            else
                dc++;
            
        }
        if(sc <= k)
            return true;
        return false;
    }
};