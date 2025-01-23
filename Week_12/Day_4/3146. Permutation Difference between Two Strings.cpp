class Solution {
public:
    int findPermutationDifference(string s, string t) {
        int n = s.size();
        int m = t.size();
        vector<pair<char, int>> fs(n);
        vector<pair<char, int>> ft(m);
        for(int i=0; i<s.size(); i++)
        {
            fs[i] = make_pair(s[i], i);

        }
        for(int i=0; i<t.size(); i++)
        {
            ft[i] = make_pair(t[i], i);
        }
        int total = 0;
        sort(fs.begin(), fs.end());
        sort(ft.begin(), ft.end());
        for(int i=0; i<t.size(); i++)
            total += abs(fs[i].second-ft[i].second);
        
        return total;
        
    }
};