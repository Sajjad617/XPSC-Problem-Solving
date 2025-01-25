class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int, char> mp;
        for(int i=0; i<s.size(); i++)
        {
            mp[indices[i]] = s[i];
        }
        string ss = "";
        for(auto x : mp)
        {
            ss += x.second;
        }
        return ss;
    }
};