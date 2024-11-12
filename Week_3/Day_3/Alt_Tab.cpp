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
    int n;
    cin >> n;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
        /* code */
    }
    map<string, int> mp;
    for (int i = n-1; i >= 0; i--)
    {
        string x = v[i];
        if(mp[x]==0)
        {
            cout << x[x.size()-2] << x[x.size()-1];
        }
        mp[x] = 1;
        /* code */
    }
    
    
    return 0;
}