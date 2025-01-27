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
        ll mx = 0;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool flag = true;
        for (ll i = 0; i < n; i++)
        {
            if(v[i] <= max((2*(n-i-1)), (2*i)))
            {
                flag = false;
                break;
            }
        }
        if(flag)
            Y;
        else
            no;
        
        
    }
    return 0;
}