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
        string s, c;
        cin >> s;
        bool flag = true;
        int l = 0, r = s.size()-1;
        while(l < r)
        {
            if(s[l] < s[r])
                break;
            else if (s[l] > s[r])
            {
                // cout << "**" << endll;
                c = s;
                reverse(c.begin(), c.end());
                c += s;
                flag = false;
                break;
            }
            r--;
            l++;
        }
        if(flag)
            cout << s << endll;
        else
            cout << c << endll;

    }
    return 0;
}