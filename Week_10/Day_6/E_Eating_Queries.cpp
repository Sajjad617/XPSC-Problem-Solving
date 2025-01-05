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
        int n, q;
        cin >> n >> q;
        vector<int> v(n), prefx(n+1);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        for (int i = 1; i <= n; i++)
        {
            prefx[i] = prefx[i-1]+v[i-1];
        }
        for (int i = 0; i < q; i++)
        {
            int k, cal = -1;
            cin >> k;
            auto it = lower_bound(prefx.begin(), prefx.end(), k);
            if(it != prefx.end())
            {
                cal = it-prefx.begin();
            }
            cout << cal << endll;
        }
    }
    return 0;
}