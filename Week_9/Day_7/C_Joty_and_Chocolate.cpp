#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
ll LCM(ll a, ll b)
{
    return (a / __gcd(a, b) *b);

}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll x = n/a, y = n/b;
    ll ov = n / LCM(a, b);
    ll total = (x*p)+(y*q)-(ov*(min(p, q)));
    cout << total << endll;
    // cout << x << "<>" << y << "<>" << ov << endll;
    return 0;
}