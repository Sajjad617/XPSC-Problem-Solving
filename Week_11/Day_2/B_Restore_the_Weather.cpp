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
        vector<pair<int, int>> v1(n);
        vector<int> v2(n);
        vector<int> final(n);
        // map<int, deque<int>> mp;
        for (int  i = 0; i < n; i++)
        {
            cin >> v1[i].first;
            v1[i].second = i;
            // int x = i+1;
            // mp[v1[i]].push_back(i);
            // mp[v1[i]] = mp[v1[i]].push_back(i+1);
            /* code */
        }
        for (int  i = 0; i < n; i++)
        {
            cin >> v2[i];

        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        for (int i = 0; i < n; i++)
        {
            final[v1[i].second] = v2[i];
            /* code */
        }
        for(auto x : final)
            cout << x << " ";
        // for(auto x : mp)
        // {
        //     int sz = x.second.size();
        //     for (int i = 0; i < sz; i++)
        //     {
        //         int temp = x.second.front();
        //         x.second.pop_front();
        //         cout << v2[temp] << " ";
        //     }
            
        //     // x.second.pop_front();
        // }
 
        nl;
    }
    return 0;
}