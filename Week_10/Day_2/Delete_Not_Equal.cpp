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
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1')
                one++;
            else
                zero++;
        }
        if(one == 0 || zero == 0)
            cout << s.size() << endll;
        else
            cout << 1 << endll;  
    }
    return 0;
}