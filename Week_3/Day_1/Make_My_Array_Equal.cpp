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
    int t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> v;
        set<ll> s;
        for (ll i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if(v[i]!=0)
                s.insert(x);
        }
        if(s.size() < 2)
            Y;
        else
            no;
        
    }
    return 0;
}