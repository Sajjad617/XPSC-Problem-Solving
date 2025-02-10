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
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> mp;
        long long res = 0;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            v[i] -= i;
            res += mp[v[i]];
            mp[v[i]]++;
        }
        cout << res << endl;
    }
    return 0;
}