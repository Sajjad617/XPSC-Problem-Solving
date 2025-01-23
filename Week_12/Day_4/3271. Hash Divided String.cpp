class Solution {
public:
    string stringHash(string s, int k) {
        int n = s.size();
        int cnt = 0;
        int total = 0;
        string ss = "";
        for(auto x : s)
        {
            
            total += x-'a';
            cnt++;
            if(cnt==k)
            {
                cnt = 0;
                int cal = total % 26;
                ss.push_back(cal+'a');
                total = 0;
            }
        }
        return ss;
    }
};