#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    // string s1;
    // cin >> s1;
    ll n, m, k;
    cin >> n >> m >> k;
    // cout << (n/(k-1)) << " " << (m/(k-1)) << endl;
    cout << ((n+k-1)/k) * ((m+k-1)/k) << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // while(t--)
    // {
        game();
    // }
    return 0;
}