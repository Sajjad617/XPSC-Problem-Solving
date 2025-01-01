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
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            v2[i] = v2[i]*v1[i];
        }
        sort(v2.begin(), v2.end(), greater<int>());
        int cnt = 0, total = 0;
        for (int i = 0; i < n; i++)
        {
            if(total >= k)
                break;
            total += v2[i];
            cnt++;
            // cout << total << " ";
        }

        if(k>total)
            cout << -1 << endll;
        else
            cout << cnt << endll;  
    }
    return 0;
}