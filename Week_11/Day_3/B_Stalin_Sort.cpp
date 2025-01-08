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
        
        int cnt = 0;
        int mn = n;
        for (int i = 0; i < n; i++)
        {
            cnt = i;
            for (int j = i+1; j < n; j++)
            {
                if(v[i] < v[j])
                {
                    cnt++;

                }
            }
            
            mn = min(mn, cnt);
            // cout << cnt << " ";
        }
        cout << mn << endll;
        
    }
    return 0;
}