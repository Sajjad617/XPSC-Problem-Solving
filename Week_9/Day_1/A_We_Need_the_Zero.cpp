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
        int cal = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            XOR ^= v[i];
        }
        for (int i = 0; i < n; i++)
        {
            v[i] ^= XOR;
        }
        for (int i = 0; i < n; i++)
        {
            cal ^= v[i];
        }
        // for(auto x : v)
        //     cout << x << " ";
        if(cal==0)
            cout << XOR << endll;
        else
            cout << -1 << endll;

        
    }
    return 0;
}