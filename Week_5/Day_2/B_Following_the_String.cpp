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
        vector<int> v(n);
        map<char, int> mp;
        for(int i=0; i<26; i++)
        {
            mp[i+97] = 0;
        }
        // cout << mp['a'] << endll;
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
            for(auto it : mp)
            {
                if(it.second == v[i])
                {
                    cout << it.first;
                    mp[it.first]++;
                    break;
                }
            }
        }
        cout << endll;

    }
    return 0;
}