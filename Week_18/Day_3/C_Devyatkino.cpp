#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    ll n;
    cin >> n;
    // string s1;
    // cin >> s1;
    ll cur = 0, res = 20;
    for (int i = 0; i < 10; i++)
    {
        ll m = n;
        cur *= 10;
        cur += 9;
        ll cnt = 0;

        for (int j = 0; j < 10; j++)
        {
            ll temp = m, flag = 0;

            while(temp)
            {
                int d = temp%10;
                if(d==7)
                {
                    flag = 1;
                    break;
                }
                temp /= 10;
            }
            if(flag)
                res = min(cnt, res);
            
                m += cur;
                cnt++;
        }
    }
    cout << res << endl;
    
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