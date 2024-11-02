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
    map<string, int> mp;
    vector<string> v(n);
    for(int i=0; i<n; i++) cin >> v[i];

    for(int i=n-1; i>=0; i--)
    {
        if(mp[v[i]]==0)
            cout << v[i] << endll;
        
        mp[v[i]] = 1;
    }    
    return 0;
}