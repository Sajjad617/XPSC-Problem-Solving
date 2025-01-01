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
        ll cal = 0, total = 0;
        for (ll i = 0; i < n; i++)
        {
            cal += v[i];
            // total += abs(cal);
            total += cal;
            cout << total << " " << cal << endl;
        }
        // cout << total << endll; 
    }
    return 0;
}