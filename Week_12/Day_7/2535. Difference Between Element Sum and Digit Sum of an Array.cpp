class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        int n = nums.size();
        for(auto x : nums)
        {
            element_sum += x;
            int a = x;
            while(a)
            {
                digit_sum += (a%10);
                a = a/10;
            }
            // digit_sum += x; 
        }
        return abs(digit_sum - element_sum);
        // return digit_sum;
    }
};