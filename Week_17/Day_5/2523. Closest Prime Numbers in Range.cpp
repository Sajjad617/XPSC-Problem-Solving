class Solution {
    public:
        vector<int> closestPrimes(int left, int right) {
            vector<int> isprime(right+1, true);
            for(int i=2; i*i<= right; i++)
            {
                if(isprime[i]==true)
                {
                    for(int j=2; i*j<=right; j++)
                        isprime[i*j]=false;
                }
            }
            vector<int> prime;
            for(int i=max(2, left); i<=right; i++)
            {
                if(isprime[i]==true)
                    prime.push_back(i);
            }
            int a=0, b=INT_MAX;
            for(int i=1; i<prime.size(); i++)
            {
                if((b-a) > (prime[i]-prime[i-1]))
                {
                    b = prime[i];
                    a = prime[i-1];
                }
            }
            if(a==0)
                return {-1, -1};
            return {a, b};
        }
    };