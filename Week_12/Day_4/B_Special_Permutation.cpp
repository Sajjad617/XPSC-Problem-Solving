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
        int n, a, b;
        cin >> n >> a >> b;
        int x = n/2;
        int y = x+1;
        if(a>y || b<x)
            cout << -1 << endl;
        else if((a==y && b!=x) || (b==x && a!=y))
            cout << -1 << endl;
        else{

            cout << a << " ";
            for (int i = y; i <= n; i++)
            {
                if(i==b || i==a) continue;
                cout << i << " ";
                /* code */
            }
            cout << b << " ";
            for (int i = 1; i <= x; i++)
            {
                if(i==b || i==a) continue;
                cout << i << " ";
                /* code */
            }
            nl;
            
        }
    }
    return 0;
}