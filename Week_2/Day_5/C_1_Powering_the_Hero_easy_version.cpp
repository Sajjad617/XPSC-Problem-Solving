#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        for(ll i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        priority_queue<ll> pq;
        ll cal = 0;
        for(ll i=0; i<n; i++)
        {
            if(v[i]==0)
            {
                if(!pq.empty())
                {
                    cal += pq.top();
                    pq.pop();
                }

            }   
            else
                pq.push(v[i]);
        }
        cout << cal << endll;
    }
    return 0;
}