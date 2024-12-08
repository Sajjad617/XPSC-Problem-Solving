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
        int n;
        cin >> n;
        vector<int> v(n+1);
        int cal = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            cal = __gcd(cal, abs(v[i]-i));
            // cout << cal << "<>" << abs(v[i]-i) << "<>" << v[i] << endll;
        }
        cout << cal << endll;
    }
    return 0;
}