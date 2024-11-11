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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            /* code */
        }
        sort(v.begin(), v.end());
        // cout << v[n-3] << endll;

        
        int a = abs(v[0]-v[n-3]);
        int b = abs(v[1]-v[n-2]);
        int c = abs(v[2]-v[n-1]);

        int mn = min(a, b);

        cout << min(mn, c) << endll;

        
    }
    return 0;
}