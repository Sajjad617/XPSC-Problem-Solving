#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll

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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }
        ll total = accumulate(v.begin(), v.end(), 0LL);
        while(n>1)
        {
            vector<ll> nv;
            for (ll i = 0; i < n-1; i++)
            {
                nv.push_back(v[i+1]-v[i]);
            }
            total = max(total, abs(accumulate(nv.begin(), nv.end(), 0LL)));
            for (ll i = 0; i < n; i++)
            {
                v[i] = nv[i];
            }
            // for(auto x : nv)
            //     cout << x << " ";
            n--;
            // nl;
        }
        cout << total << endl;
        
        
    }
    return 0;
}