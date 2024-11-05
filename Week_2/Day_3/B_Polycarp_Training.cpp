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
    vector<ll> v(n+1);
    for (ll i = 1; i <=n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int cnt = 0, k = 1;
    for (ll i = 1; i <=n; i++)
    {
        if(k<=v[i]){
            cnt++;
            k++;
        }
    }
    cout << cnt << endll;

    
    return 0;
}