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
    int n, q;
    cin >> n >> q;
    vector<int> v(n);
    vector<int> id(n+1);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }

    for(int i=0; i<q; i++)
    {
        int l, r;
        cin >> l >> r;
        l--, r--;
        id[l]++;
        id[r+1]--;
    }
    for(int i=1; i<=n; i++)
    {
        id[i] = id[i] + id[i-1];
    }

    sort(v.rbegin(), v.rend());
    sort(id.rbegin(), id.rend());
    ll re = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << id[i] << " " << v[i] << endl;
        re += (1LL*v[i]*id[i]);
    }
    cout << re << endl;
    

    
    return 0;
}