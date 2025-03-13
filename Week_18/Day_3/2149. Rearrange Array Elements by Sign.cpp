class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            vector<int> neg;
            vector<int> po;
            vector<int> re;
            for(auto x: nums)
            {
                if(x>0)
                    po.push_back(x);
                else
                    neg.push_back(x);
            }
            int p=0,n=0;
            while(re.size() != nums.size())
            {
                re.push_back(po[p++]);
                if(re.size()==nums.size())
                    break;
                re.push_back(neg[n++]);
            }
            return re;
        }
    };