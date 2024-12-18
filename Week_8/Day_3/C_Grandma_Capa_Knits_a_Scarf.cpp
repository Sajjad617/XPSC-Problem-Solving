#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        string s; 
        cin >> s;
        int cal = n+1;
        // for (int i = 0; i < 26; i++)
        for (char i = 'a'; i <= 'z'; i++)
        {
            int l = 0, r = n-1;
            int cnt = 0;
            while (l<=r)
            {
                if(s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else if(s[l]==i)
                {
                    l++;
                    cnt++;
                }
                else if (s[r]==i)
                {
                    r--;
                    cnt++;
                }
                else
                {
                    cnt = n+1;
                    break;
                }
            }
            cal = min(cnt, cal);
        }
        if(cal == n+1)
            cout << -1 << endll;
        else
            cout << cal << endll;
        
        
    }
    return 0;
}