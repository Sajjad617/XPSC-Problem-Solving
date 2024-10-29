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
    ll n;
    cin >> n;
    vector<ll> v;
    ll sum = 0;
    ll mn = INT_MAX;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
        sum += x;
        if(x%2==1)
        {
            mn = min(mn, x);
        }
    }
    if(sum%2==0)
        cout << sum << endll;
    else
        cout << sum-mn << endll;
    return 0;
}