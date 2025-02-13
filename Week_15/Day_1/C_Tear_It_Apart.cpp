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
        string s;
        cin >> s;
        ll n = s.size(), cnt, mn = INT_MAX, mx;
        for(char i = 'a'; i<='z'; i++)
        {
            cnt = 0, mx = 0;
            for(ll j=0; j<n; j++)
            {
                if(s[j] != i)
                {
                    cnt++;
                    if(cnt > mx)
                        mx = cnt;
                }
                else
                    cnt = 0;
            }
            if(mn > mx)
                mn = mx;
        } 
        if(mn == 0)
            cout << 0 << endl;
        else
        {
            cnt = 0;
            while(mn != 1)
            {
                cnt++;
                mn /= 2;
            }
            cout << cnt+mn << endl;
        }


    }
    return 0;
}