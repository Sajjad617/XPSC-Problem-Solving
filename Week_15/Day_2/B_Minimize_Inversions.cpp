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
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            /* code */
        }
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
            mp[v1[i]] = v2[i]; 
            /* code */
        }
        for(auto x : mp)
            cout << x.first << " ";
        nl;
        for(auto x : mp)
            cout << x.second << " ";
        
        nl;
        
    }
    return 0;
}