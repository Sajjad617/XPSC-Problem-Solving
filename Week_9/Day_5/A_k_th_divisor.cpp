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
    ll n, k;
    cin >> n >> k;
    vector<ll> v;
    // for (ll i = 1; i*i <= n; i++)
    for (ll i = 1; i <= sqrt(n); i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if((n/i) != i)
            {
                v.push_back(n/i);

            }
        }
    }
    // for(auto x : v)
    //     cout << x << " ";
    sort(v.begin(), v.end());
    if(v.size() < k)
    {
        cout << "-1" << endll;
    }
    else
    {
        cout << v[k-1] << endll;

    }

    
    return 0;
}