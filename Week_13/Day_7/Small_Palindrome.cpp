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
        string s1 (a/2, '1');
        string s2 (b/2, '2');
        string pl = s1+s2;
        pl = pl+(s2+s1);

        cout << pl << endl;

    }
    return 0;
}