class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string> v;
        for(auto x : target)
        {
            string S;
            if(v.empty())
                S = "";
            else
                S = v.back();

            for(char i = 'a'; i<=x; i++)
            {
                string ns = S+i;
                v.push_back(ns);
            }
        }
        return v;
    }
};