class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mp;
        
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                mp[nums[i]*nums[j]]++;
            }
        }
        int res = 0;
        for(auto x : mp)
        {
            int z = x.second-1;
            res += ((z*(z+1))/2)*8; 
        }
        return res;
    }
};