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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cal = 0;
        for (int i = 0; i < n; i++)
        {
            int x = abs(v[i]-(i+1));
            if(x%k)
                cal++;
        }
        if(cal > 2) cout << "-1" << endll;
        else if (cal==2) cout << "1" << endll;
        else cout << "0" << endll;

    }
    return 0;
}