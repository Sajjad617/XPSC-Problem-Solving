class Solution {
    public:
        string kthDistinct(vector<string>& arr, int k) {
            unordered_map<string, int> mp;
            for(auto x : arr)
                mp[x]++;
    
            for(auto x : arr)
            {
                if(mp[x]==1)
                {
                    k--;
                }
                if(k==0)
                    return x;
    
            }
            
            // vector<string> v;
            // for(auto x : mp)
            // {
            //     if(x.second == 1)
            //         v.push_back(x.first);
            // }
            // reverse(v.begin(), v.end());
            // string s = "";
            // if(v.size()>=k)
            //     return v[k-1];
            return "";
        }
    };