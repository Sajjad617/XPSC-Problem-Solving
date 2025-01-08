class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> v;
        int sz = words.size();
        string l;
        for(int i=0; i<sz; i++)
        {
            string f = words[i];
            for(int j=0; j<sz; j++)
            {
                if(j!=i)
                {
                    l = words[j];
                    if(l.find(f) <= l.size())
                    {
                        v.push_back(f);
                        break;
                    }
                }
                

            }
        }
        return v;
    }
};