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
        if(s[0]=='s')
            s[0] = '.';
        if(s.back()=='p')
            s.back() = '.';
        bool flag1 = false;
        bool flag2 = false;
        // cout << s << endll;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='s')
                flag1 = true;
            if(s[i]=='p')
                flag2 = true;
            /* code */
        }
        if(flag1 && flag2)
            no;
        else
            Y;
        
        
    }
    return 0;
}