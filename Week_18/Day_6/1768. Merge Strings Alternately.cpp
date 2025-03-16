class Solution {
    public:
        string mergeAlternately(string word1, string word2) {
            string s = "";
            int n = word1.size();
            int m = word2.size();
            int l = 0, r=0;
            for(int i=0;i<n+m;i++)
            {
                
                if(n>l)
                    s.push_back(word1[l++]);
                if(m>r)
                    s.push_back(word2[r++]);
            }
            // l = 1;
            // for(int i=0;i<word2.size();i++)
            // {
            //     s[l] = word2[i];
            //     l +=2;
            // }
            return s;
            
        }
    };