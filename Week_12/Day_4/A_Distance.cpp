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
        int a, b;
        cin >> a >> b;
        if(a%2==0 && b%2==0)
            cout << a/2 << " " << b/2 << endll;
        else if(a%2==1 && b%2==1)
            cout << a/2 << " " << b/2+1 << endll;
        else
            cout << -1 << " " << -1 << endll;

    }
    return 0;
}