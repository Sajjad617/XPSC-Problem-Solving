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
        int mx, dflt, tools;
        cin >> mx >> dflt >> tools;
        vector<int> v(tools);
        for (int i = 0; i < tools; i++)
        {
            cin >> v[i];
            /* code */
        }
        ll cnt = 0;
        for (int i = 0; i < tools; i++)
        {
            cnt += min(v[i], mx-1);
            /* code */
        }
        cnt += dflt;
        // while(dflt!=0)
        // {
        //     if(dflt==1 && !v.empty())
        //     {
        //         dflt += min(v.back(), mx);
        //         v.pop_back();
        //     }
        //     cnt++;
        //     dflt--;
        // }
        cout << cnt << endll;
    }
    return 0;
}