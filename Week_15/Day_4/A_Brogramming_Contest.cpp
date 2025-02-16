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
        int n;
        cin >> n;
        string s;
        cin >> s;
        // int n = s.size();
        int cnt = 0;
        for (int i = n-1; i >= 1; i--)
        {
            if(s[i]!=s[i-1])
                cnt++;
        }
        // cout << cnt << endl;
        if(cnt==0)
        {
            if(s[0]=='1')
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        else
        {
            if(s[0]=='0')
                cout << cnt << endl;
            else
                cout << cnt+1 << endl;
        }
        

    }
    return 0;
}