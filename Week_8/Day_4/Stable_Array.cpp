#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        vector<ll> v(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll cal = 0;
        ll mx = INT_MIN;
        for (ll i = n-1; i >= 0; i--)
        {
            if(v[i-1] < v[i])
            {
                v[i-1] = v[i];
                cal++;
                // cout << "**" << endll;
            }
            else
            {
                // cout << cal << endll;

                mx = max(mx, cal);
                cal = 0;
            }
        }
        cout << mx << endll;
    }
    return 0;
}