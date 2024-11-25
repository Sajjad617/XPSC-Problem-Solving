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
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            /* code */
        }
        int total = 0;
        for (int i = 0; i < a; i++)
        {
            int acal = b*v[i];
            total += min(acal, c);
        }
        cout << total << endll;
    }
    return 0;
}