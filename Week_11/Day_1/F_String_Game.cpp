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
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i]--;
    }
    bool flag = false;
    auto ok = [&](int del)
    {
        vector<bool> bad(n);
        for (int i = 0; i <= del; i++)
        {
            bad[v[i]] = true;
            /* code */
        }
        int j=0;
        for (int i = 0; i < n; i++)
        {
            if(!bad[i] && t[i] == p[j])
                j++;
            if(j==m)
            {
                flag = true;
                return true;
            }
            /* code */
        }
        return false;
        
    };
    int l = 0, r=n-1, mid, ans = 0;
    while(l <= r)
    {
        mid = l+(r-l)/2;
        if(ok(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
            r = mid-1;
    }
    // cout << (found ? ans + 1 : ans) << '\n';
    if(flag)
        cout << ans+1 << endll;
    else
        cout << ans << endll;
    return 0;
}