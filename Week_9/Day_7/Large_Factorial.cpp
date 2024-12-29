#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
const int M = 1e9+7;
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
        int total = 1;
        for (int i = 1; i <= n; i++)
        {
            total = (1LL * total % M * i % M)%M;
            /* code */
        }
        cout << total << endll;
        
    }
    return 0;
}