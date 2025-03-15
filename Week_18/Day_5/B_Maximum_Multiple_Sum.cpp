#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    // int n;
    // cin >> n;
    // string s1;
    // cin >> s1;
    int n;
        cin >> n;
        int ans = 2;
        ll re = 0;
        for (int i = 2; i <= n; i++) {
            ll sum = 0;
            for (int j = 1; i * j <= n ; j++) {
                sum += (i * j);
            }
            if (re < sum) {
                re = sum;
                ans = i;
            }
        }
        cout << ans << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        game();
    }
    return 0;
}