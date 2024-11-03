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
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        mp[x] +=1 ;
    }
    int mx = INT_MIN;
    for(auto it = mp.begin(); it!= mp.end(); it++)
    {
        int x = it->second;
        mx = max(x, mx);
    }
    cout << mx << endll;
    return 0;
}