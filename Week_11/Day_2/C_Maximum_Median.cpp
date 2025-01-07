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
    
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        /* code */
    }
    auto ok = [&](int med)
    {
        ll cnt = 0;
        for(int i=(n/2); i<n; i++)
            cnt += (v[i] < med ? (med - v[i]) : 0);
        
        return cnt <= k;
    };
    
    sort(v.begin(), v.end());
    int l = 1, r = 2e9, mid, ans;
    while(l<=r)
    {
        mid = l + (r-l) / 2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid-1;
    }
    cout << ans << endll;
        
    
    return 0;
}