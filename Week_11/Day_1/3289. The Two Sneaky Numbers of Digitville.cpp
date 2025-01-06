class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> v;
        map<int, int> mp;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(auto x : mp)
        {
            int f = x.second;
            if(f > 1)
                v.push_back(x.first);
        }
        sort(v.begin(), v.end());
        return v;
    }
};