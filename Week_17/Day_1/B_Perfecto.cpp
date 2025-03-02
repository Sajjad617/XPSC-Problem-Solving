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
    ll x = (n*(n+1))/2;
    ll sq = sqrt(x);
    if(sq*sq==x){
        cout << -1 << endl;
        return;
    }
    ll sum = 0;
    vector<ll> v;
    for (int i = 1; i <= n; i++)
    {
        if(!v.empty())
        {
            cout << v.back() << " ";
            sum += v.back();
            v.pop_back();
        }
        else
        {
            ll take = sum+i;
            ll sq1 = sqrt(take);
            if(sq1*sq1==take)
            {
                cout << i+1 << " ";
                sum += i+1;
                v.push_back(i);
            }
            else
            {
                cout << i << " ";
                sum += i;
            }
        }
    }
    nl;
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