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
    ll t;
    cin >> t;
    while(t--)
    {
        ll n, k;
        cin >> n >> k;

        ll f = n-k;
        ll sum = n*(n+1)/2;
        ll sum2 = f*(f+1)/2;
        ll total = sum - sum2;
        if(total%2==0)
            Y;
        else
            no;
    }
    return 0;
}