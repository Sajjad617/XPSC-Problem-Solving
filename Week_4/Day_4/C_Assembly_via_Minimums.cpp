#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll

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
        int mx = (n*(n-1))/2;
        vector<int> v(mx), final;
        map<int, int> mp;
        int m = INT_MIN;
        for (int i = 0; i < mx; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            m = max(m, v[i]);
            
        }
        int l = 1;
        for(auto x : mp)
        {
            // cout << x.first << "<>" << x.second << endll;
            while(x.second>0)
            {
                final.push_back(x.first);
                x.second -= n-l;
                l++;
            }
        }
        final.push_back(m);
        for(auto x : final)
        {
            cout << x << " ";
        }
        cout << endll;
        

    }
    return 0;
}