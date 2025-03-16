class Solution {
    public:
        int minCapability(vector<int>& nums, int k) {
            int l = *min_element(nums.begin(), nums.end());
            int h = *max_element(nums.begin(), nums.end());
            int mid;
            int cal;
            while(l<=h)
            {
                mid = l+(h-l)/2;
                if(have(mid, nums, k))
                {
                    cal = mid;
                    h = mid-1;
                }
                else
                    l = mid+1;
            }
            return cal;
        }
    private:
        int have(int& mx, vector<int>& nums, int& k)
        {
            int cnt = 0;
            for(int i=0; i<nums.size(); i++)
            {
                if(nums[i] <= mx)
                {
                    cnt++;
                    i++;
                }
            }
            return cnt>=k;
        }
    };