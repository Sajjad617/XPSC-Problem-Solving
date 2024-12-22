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
        int XOR = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            XOR ^= v[i];  
        }
        int mn = XOR;
        for (int i = 0; i < n; i++)
        {
            int cal = (XOR^v[i]);
            mn = min(mn, cal);
            // cout << cal << " ";
        }
        // nl;
        cout << mn << endll;
        
    }
    return 0;
}