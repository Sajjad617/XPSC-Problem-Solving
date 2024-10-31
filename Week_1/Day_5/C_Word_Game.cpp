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
        int n, m=3;
        cin >> n;
        map<string, vector<int>> mp;
        for(int i=1; i<=m; i++)
        {
            for(int j=1; j<=n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }

        vector<int> cal(m+1);

        for(auto [x, y] : mp)
        {
            vector<int> v = y;
            if(v.size() == 1)
                cal[v[0]] += 3;
            if(v.size() == 2)
            {
                cal[v[0]]++;
                cal[v[1]]++;
            }
        }

        for(int i=1; i<=m; i++)
            cout << cal[i] << " ";
        
        cout << endll;
    }
    return 0;
}