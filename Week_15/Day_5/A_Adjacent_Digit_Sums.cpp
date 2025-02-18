#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void solve()
{
    ll x, y;
    cin >> x >> y;
    if(y> x+1)
    {
        no;
        return;
    }
    if((x%9+1)%9 == y%9)
    {
        Y;
        return;
    }
    no;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}