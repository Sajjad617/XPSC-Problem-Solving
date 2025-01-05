class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int cnt = 0;
        vector<int> v;

        for(auto w : words)
        {
            if(w.find(x) < w.size())
            {
                v.push_back(cnt);
            }
            cnt++;
        }
        return v;
    }
};