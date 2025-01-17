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
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];
            /* code */
        }
        sort(v.begin(), v.end());
        // cout << v.front() << "<>" << v.back();
        // nl;
        if(total+n-v[0]+v[n-1] <= k)
            Y;
        else
            no;

        
    }
    return 0;
}