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
        vector<ll> v(n-1);
        vector<ll> final;
        for (ll i = 0; i < n-1; i++)
        {
            cin >> v[i];
            /* code */
        }
        // int f = 0;
        sort(v.begin(), v.end());
        int f = 1;
        final.push_back(f);
        // cout << f << "<>" <<  v[0] << endll;
        for (ll i = 0; i < n-1; i++)
        {
            ll cal = abs(v[i]-f);
            final.push_back(cal);
            f = cal;
        }
        // reverse(final.begin(), final.end());
        for(auto x : final)
            cout << x << " ";
        
        cout << endll;
    }
    return 0;
}