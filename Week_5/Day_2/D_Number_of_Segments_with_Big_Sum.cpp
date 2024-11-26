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
    ll n, c;
    cin >> n >> c;
    // priority_queue<pair<int, int>> pq;
    vector<ll> v(n);
    for(ll i=0; i<n; i++)
    {
        cin >> v[i];      
    }
    ll l = 0;
    ll r = 0;
    ll cnt = 0;
    ll total = 0;
    bool flag = true;
    while(r < n)
    {
        total += v[r];
        if(total>=c)
        {
            while(total>=c)
            {
                total -= v[l];
                l++;
                cnt += n-r;
            }
        }
        r++;

    }
    cout << cnt << endll;
    return 0;
}