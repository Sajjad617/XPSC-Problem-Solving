#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    ll n;
    cin >> n;
    // string s1;
    // cin >> s1;
    vector<int> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
        /* code */
    }
    ll re = INT_MAX;
    for (ll i = 0; i < n-1; i++)
    {
        ll x = max(v[i], v[i+1]);
        re = min(re, x);
    }
    
    cout << re-1 << endl;

    
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
        game();
    }
    return 0;
}