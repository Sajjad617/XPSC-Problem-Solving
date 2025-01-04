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
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        
    }
    for (int i = 0; i < k; i++)
    {
        int x, l=0, r=n-1, ans=n, mid;
        cin >> x;
        while (l <= r)
        {
            mid = l+(r-l)/2;
            if(x <= v[mid])
            {
                ans = mid;
                r = mid-1;
            }
            else
                l = mid+1;
        }
        cout << ans+1 << endl;
    }
    return 0;
}