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
    vector<int> v(n), q(k);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < k; i++)
    {
        cin >> q[i];
        int x = q[i];
        int l = 0, r = n-1, mid;
        int len = -1;
        while(l <= r)
        {
            mid = (l+r)/2;

            if(x >= v[mid])
            {
                l = mid+1;
                len = mid;
            }
            else
                r = mid-1;
        }
        cout << len+1 << endll;  
    }
    
    return 0;
}