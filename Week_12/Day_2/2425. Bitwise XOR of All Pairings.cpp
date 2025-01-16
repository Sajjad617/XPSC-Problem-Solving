class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1 = nums1.size(), n2 = nums2.size();
        int cal = 0;
        if(n2 % 2 == 1)
        {
            for(auto x : nums1)
                cal = cal ^ x;
        }
        if(n1%2 == 1)
        {
            for(auto x : nums2)
                cal = cal ^ x;
        }
        
        return cal;
        
    }
};