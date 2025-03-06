class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            map<int, int> mp;
            vector<int> v, res;
            for(auto x: grid)
            {
                for(auto val : x)
                {
                    mp[val]++;
                    if(mp[val]==1)
                        v.push_back(val);
                }
            }
            for(auto x : mp)
            {
                if(x.second == 2)
                    res.push_back(x.first);
            }
            sort(v.begin(), v.end());
            bool flag = false;
            for(int i=1; i<=v.size(); i++)
            {
                if(v[i-1] != i){
                    flag = true;
                    res.push_back(i);
                    break;
                }
            }
            if(!flag)
                res.push_back(v.size()+1);
            return res;
        }
    };