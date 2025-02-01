class Solution {
public:
    string sortSentence(string s) {
        int n = s.size();
        vector<pair<int, string>> v;
        string ns = "";
        for(int i=0; i<n; i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int x = s[i]-'0';
                v.push_back(make_pair(x-1, ns));
                ns = "";
                i++;
            }
            else
            {
                ns += s[i];
            }
        }
        ns = "";
        sort(v.begin(), v.end());
        for(auto x : v)
        {
            ns += x.second;
            ns += " ";
            
        }
        ns.pop_back();
        
        return ns;
    }
};