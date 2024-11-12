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
        int c, p, h;
        cin >> c >> p >> h;

        priority_queue<ll> pq;
        priority_queue<ll> pq2;
        for (int i = 0; i < c; i++)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        for (int i = 0; i < p; i++)
        {
            ll x;
            cin >> x;
            pq2.push(x);
        }
        ll total = 0;
        while(!pq.empty() && !pq2.empty())
        {
            ll x = pq2.top()*h;
            if(x > pq.top())
            {
                total += pq.top();
            }
            else
            {
                total += x;
            }
            // cout << "**" << endll;
            pq.pop();
            pq2.pop();
        }

        cout << total << endll;
        
    }
    return 0;
}