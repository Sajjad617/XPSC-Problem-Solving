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
    map<int, int> mp;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        mp[l]++;
        mp[r+1]--;
    }
    bool flag = true;
    ll sum = 0;
    for(auto x : mp)
    {
        sum += x.second;
        if(sum > 2)
            flag = false;
    }
    if(flag)
        Y;
    else
        no;
    return 0;
}