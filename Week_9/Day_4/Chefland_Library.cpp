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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x = i+1;
            mp[v[i]] = x;
        }
        int total = 0;
        for(auto z : mp)
            total += z.second;
         
        cout << total << endll;
        
    }
    return 0;
}