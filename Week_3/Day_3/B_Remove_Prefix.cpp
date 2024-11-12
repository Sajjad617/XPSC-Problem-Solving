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
        vector<int> v, r;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        map<int, int> mp;
        
        for(int i=n-1; i>=0; i--)
        {
            int x = v[i];
            // cout << x << " ";
            if(mp[x]==0)
            {
                r.push_back(x);
                // break;
                // cout << "**";
            }
            else
            {
                // cout << x << "<>" ;
                break;
            }
            
            mp[x] = 1;
            // cout << endll;
        }
        // cout << v.size() << "<>"<< r.size() << endll;
        cout << v.size() - r.size() << endll;
    }
    return 0;
}