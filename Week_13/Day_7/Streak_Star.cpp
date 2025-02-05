#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
int fun(vector<int>& v, int n) {
    int mx = 1;
    int cnt = 1;

    for (int i = 1; i < n; ++i) {
        if (v[i] >= v[i - 1]) 
        {
            cnt++;
        } 
        else 
        {
            mx = max(mx, cnt);
            cnt = 1;
        }
    }
    mx = max(mx, cnt);

    return mx;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int mx1 = fun(v, n);

        int mx2=mx1;
        for (int i = 0; i < n; i++)
        {
            int x = v[i];
            v[i] = v[i]*k;

            mx2 = fun(v, n);
            // cout << mx2 << endll;

            mx1 = max(mx1, mx2);
            v[i] = x;
        }
        mx1 = max(mx1, mx2);

        cout << mx1 << endl;
        
        
    }
    return 0;
}