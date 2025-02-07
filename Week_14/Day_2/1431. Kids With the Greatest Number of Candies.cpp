class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int mx = *max_element(candies.begin(), candies.end());
        for(auto x : candies)
        {
            int z = x+extraCandies;
            if(mx <= z)
                v.push_back(true);
            else
                v.push_back(false);
        }
        return v;
    }
};