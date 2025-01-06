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
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    auto ok = [&](ll cn)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (cn/v[i]);
            if(cnt >= t)
                return true;
        }
        return false;
    };
    
    ll l = 1, r = 1e18, mid, cal;
    while(l <= r)
    {
        mid = l + (r-l)/2;
        if(ok(mid))
        {
            cal = mid;
            r = mid-1;
        }
        else
            l = mid + 1;
    }

    cout << cal << endl;
    return 0;
}