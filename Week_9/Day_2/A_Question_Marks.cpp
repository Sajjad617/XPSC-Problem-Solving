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
        int cnt = 0;
        map<char, int> mp;
        for (int i = 0; i < 4*n; i++)
        {
            if(s[i]!='?')
                mp[s[i]]++;
        }
        for(auto x : mp)
        {
            int cal = x.second;
            if(cal >= n)
                cnt += n;
            else
                cnt += cal;
        }
        cout << cnt << endll;
    }
    return 0;
}