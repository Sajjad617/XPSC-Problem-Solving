class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            vector<int> v;
            int n = nums.size();
            for(auto x : nums)
            {
                if(x < pivot)
                    v.push_back(x);
            }
            for(auto x : nums)
            {
                if(x == pivot)
                    v.push_back(x);
            }
            for(auto x : nums)
            {
                if(x > pivot)
                    v.push_back(x);
            }
            return v;
        }
    };