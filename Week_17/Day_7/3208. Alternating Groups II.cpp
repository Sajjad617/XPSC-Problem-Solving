class Solution {
    public:
        int numberOfAlternatingGroups(vector<int>& colors, int k) {
            vector<int> v=colors;
            for(int i=0; i<k-1; i++)
            {
                v.push_back(v[i]);
            }
            vector<int> re;
            for(int i=0; i<v.size(); i++)
            {
                int cnt = 1;
                while(v[i]!=v[i+1] && i+1 < v.size())
                {
                    cnt++;
                    i++;
                }
                if(cnt >= k)
                    re.push_back(cnt);
            }
            int cal = 0;
            for(auto x : re)
                cal += x-k+1;
            
            return cal;
        }
    };