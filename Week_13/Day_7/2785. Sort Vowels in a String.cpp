class Solution {
public:
    string sortVowels(string s) {
        int n = s.size();
        // queue<int> up, lo;
        vector<char> vup, vlo;
        for(int i=0; i<n; i++)
        {
            char x = s[i];
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
                vlo.push_back(x);
            else if(x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
                vup.push_back(x);
        }
        sort(vup.begin(), vup.end());
        sort(vlo.begin(), vlo.end());
        int u = 0, z=0;
        string res = "";
        for(int i=0; i<n; i++)
        {
            char x = s[i];
            if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
            {
                if(u < vup.size())
                {
                    res.push_back(vup[u++]);
                }
                else
                {
                    res.push_back(vlo[z++]);
                }
                // res.    
            }
            else
                res.push_back(s[i]);

        }
        return res;
    }
};