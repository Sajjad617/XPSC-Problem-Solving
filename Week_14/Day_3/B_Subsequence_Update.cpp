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
        int n, l, r;
        cin >> n >> l >> r;
        l--;
        vector<int> v(n);
        vector<int> vl, vr;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = l; i < n; i++)
        {
            vl.push_back(v[i]);
        }
        for (int i = 0; i < r; i++)
        {
            vr.push_back(v[i]);
        }
        // for(auto x : vl)
        //     cout << x << " ";
        // nl;
        // for(auto x : vr)
        //     cout << x << " ";
        // nl;
        sort(vl.begin(), vl.end());
        sort(vr.begin(), vr.end());
        // for(auto x : vl)
        //     cout << x << " ";
        // nl;
        // for(auto x : vr)
        //     cout << x << " ";
        // nl;
        ll tl = accumulate(vl.begin(), vl.begin()+(r-l), 0LL);
        ll tr = accumulate(vr.begin(), vr.begin()+(r-l), 0LL);
        // cout << tl << " " << tr << endl;
        cout << min(tl, tr) << endl;
    }
    return 0;
}