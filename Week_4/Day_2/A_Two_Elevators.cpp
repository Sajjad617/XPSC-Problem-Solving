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
        int a, b, c;
        cin >> a >> b >> c;
        int cal = abs(b-c) + c;

        if(a < cal)
            cout << 1 << endll;
        else if (a > cal)
            cout << 2 << endll;
        else
            cout << 3 << endll;
        
    }
    return 0;
}