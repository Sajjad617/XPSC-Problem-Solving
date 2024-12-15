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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        ll cal = 0;
        ll total = m*2;

        if(m <= a)
        {
            cal += m;
            total -= m;
        }
        else
        {
            cal += a;
            total -= a;
        }
        if(m <= b)
        {
            cal += m;
            total -= m;
        }
        else
        {
            cal += b;
            total -= b;
        }
        
        cal += c;
        total -= c;

        if(total<0)
            cout << cal+total << endll;
        else
            cout << cal << endll;

    }
    return 0;
}