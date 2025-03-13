class Solution {
    public:
        int minZeroArray(vector<int>& nums, vector<vector<int>>& queries) {
            vector<int> v(nums.size()+1);
            int dec = 0, k = 0;
            for(int i=0; i<nums.size(); i++)
            {
                while(dec + v[i] < nums[i])
                {
                    if(k==queries.size())
                        return -1;
                    
                    int l = queries[k][0];
                    int r = queries[k][1];
                    int val = queries[k][2];
                    k++;
                    if(r<i)
                        continue;
                    
                    v[max(l, i)] += val;
                    v[r+1] -= val;
                }
                dec += v[i];
            }
            return k;
        }
    };