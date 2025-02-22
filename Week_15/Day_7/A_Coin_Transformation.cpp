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
        cin >> n;
        ll cal = 1;
        while(true)
        {
            if(n<4)
                break;
            
            n /=4;
            cal *=2;

        }
        cout << cal << endl;
    }
    return 0;
}