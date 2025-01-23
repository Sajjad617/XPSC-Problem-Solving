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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
        }
        int ans = INT_MIN;
        for (int i = 1; i < n; i++)
        {
            ans = max(ans, (v[n-1]-v[i]));
        }
        for (int i = 0; i < n-1; i++)
        {
            ans = max(ans, (v[i+1]-v[0]));
        }
        for (int i = 0; i < n-1; i++)
        {
            ans = max(ans, (v[i]-v[i+1]));
        }
 
        // sort(v.begin(), v.end());
        
        if(v.size()==1)
            cout << 0 << endl;
        else
            cout << ans << endl;

    }
    return 0;
}