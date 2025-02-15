#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        string s;
        cin >> s;
        while(b--)
        {
            ll x, y;
            cin >> x >> y;
            x--;
            s.append(s.begin()+x, s.begin()+y);
        }
        while(c--)
        {
            ll x;
            cin >> x;
            x--;
            cout << s[x] << endl;

        }
    }
    return 0;
}