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
    ll cnt = INT_MAX;
    ll total = v[0];
    bool flag = true;
    while(r < n && l < n)
    {
        if(total<c)
        {
            r++;
            if(r>=n)
                break;
            total += v[r];
        }
        if(total >= c)
        {
            flag = false;
            cnt= min(cnt, r-l+1);
            total -= v[l];
            l++;
        }
    }
    if(flag)
        cout << -1 << endll;
    else
        cout << cnt << endll;
    return 0;
}