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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<int> v(n);
        vector<int> ans;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }

        ll mn = INT_MIN;
        // cout << 1 << " ";
        for (ll i = 0; i < n; i++)
        {
            if(mn <= v[i])
            {
                mn = v[i];
                ans.push_back(1);
            }
            else
                ans.push_back(0);
        }
        for(auto x : ans)
            cout << x << " ";
        nl;
    }
    return 0;
}