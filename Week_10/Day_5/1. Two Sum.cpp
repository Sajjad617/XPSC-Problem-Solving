class Solution {
public: 
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int> v;
        vector<int> cp = nums;
        if(nums.size()==2)
        {
            v.push_back(0);
            v.push_back(1);
            return v;
        }

        sort(nums.begin(), nums.end());
        int idx1, idx2;
        int l = 0, r = nums.size()-1;
        while(l < r)
        {
            int x = nums[l]+nums[r];
            
            if(target == x)
            {
                idx1 = nums[l];
                idx2 = nums[r];
                // v.push_back(nums[l]);
                // v.push_back(nums[r]);
                break;
            }
            else if(x > target )
            {
                r--;
            }
            else
                l++;
        }
        // cout << idx1 << "<>" << idx2;
        if(idx1!=idx2)
        {
            for (int i = 0; i < nums.size(); i++)
            {

                if(idx1==cp[i])
                    v.push_back(i);
                else if(idx2==cp[i])
                    v.push_back(i);
            }
        }
        else
        {
            for (int i = 0; i < nums.size(); i++)
            {

                if(idx1==cp[i])
                    v.push_back(i);
            }
            
        }
        
        return v;
        
    }
};