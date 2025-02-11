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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        int mx = INT_MIN;
        for(int i=0; i<n-1; i++)
        {
            int x = v[i+1]-v[i];
            mx = max(mx, x);
        }
        mx = max(mx, v[0]-0);
        mx = max(mx, 2*(k-v.back()));
        cout << mx << endl;
    }
    return 0;
}