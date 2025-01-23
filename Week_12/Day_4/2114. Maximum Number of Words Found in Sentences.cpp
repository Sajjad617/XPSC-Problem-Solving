class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n = sentences.size();
        int m = sentences[0].size();
        int mx = INT_MIN;
        for(auto x : sentences)
        {
            int cnt = 0;
            for(auto a : x)
            {
                if(a==' ')
                    cnt++;
            }
            cnt++;
            mx = max(mx, cnt);
        }
        return mx;
    }
};