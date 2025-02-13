class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            // using ll = long long
            priority_queue<long long, vector<long long>, greater<long long>> pq;
            for(int x:nums)
                pq.push(x);
            int cnt = 0;
            while(pq.size() != 1)
            {
                long long x = pq.top();
                if(x>=k)
                    break;
                pq.pop();
                long long y = pq.top();
                pq.pop();
                pq.push(2*x+y);
                cnt++;
            } 
            return cnt;
        }
    }; 