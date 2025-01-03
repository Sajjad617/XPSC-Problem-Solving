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
        string s;
        cin >> n >> s;
        map<char, int> mp;
        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;
            /* code */
        }
        int mn = INT_MAX, mx = INT_MIN;
        for(auto x : mp)
        {
            int l = x.second;
            mn = min(mn, l);
            mx = max(mx, l);
        }
        if(n==1)
            cout << s << endll;
        else if(mn == mx)
        {
            for (int i = 0; i < n-1; i++)
            {
                if(s[i] != s[i+1])
                {
                    s[i] = s[i+1];
                    break;
                }
            }
            cout << s << endll;
            
        }
        else
        {
            char idxmn, idxmx;
            for(auto x : mp)
            {
                if(x.second==mn)
                    idxmn = x.first;
                if(x.second==mx)
                    idxmx = x.first;
            }
            for (int i = 0; i < n; i++)
            {
                if(s[i]==idxmn)
                {
                    s[i] = idxmx;
                    break;
                }
                /* code */
            }
            
            cout << s << endll;
        }
    }
    return 0;
}