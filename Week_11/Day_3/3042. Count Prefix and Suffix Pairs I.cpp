class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt = 0;
        int sz = words.size();
        string l;
        for(int i=0; i<sz-1; i++)
        {
            string f = words[i];
            for(int j=i+1; j<sz; j++)
            {
                l = words[j];
                if(l.find(f)==0 && l.rfind(f)==(l.size()-f.size()))
                {
                    cnt++;
                    // break;
                }

            }
        }
        return cnt;
        
    }
};