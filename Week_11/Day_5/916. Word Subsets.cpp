class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<string> res;
        vector<int> fc(26, 0);
        for(auto x : words2)
        {
            vector<int> cnt(26, 0);
            for(auto c : x)
                cnt[c-'a']++;

            for(int i=0; i<26; i++)
                fc[i] = max(fc[i], cnt[i]);
        }

        for(auto& x : words1)
        {
            vector<int> cnt(26, 0);
            for(auto c : x)
                cnt[c-'a']++;

            bool flag = true;
            for(int i=0; i<26; i++)
            {
                if(cnt[i]<fc[i])
                    flag = false;
            }
            if(flag)
                res.push_back(x);
        }
        return res;
    }
};