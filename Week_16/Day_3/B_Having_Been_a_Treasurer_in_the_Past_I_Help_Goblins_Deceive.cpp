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
        ll n;
        string s;
        cin >> n >> s;

        ll m = 0, u= 0;
        for (char c : s) {
            if (c == '-') 
                m++;
            else
                u++;
        }
        if(m<2 || u==0)
            cout << 0 << endl;
        else
        {
            ll total = 1LL*(m*m)/4;
            cout << total*u << endl;
        }
    }
    return 0;
}