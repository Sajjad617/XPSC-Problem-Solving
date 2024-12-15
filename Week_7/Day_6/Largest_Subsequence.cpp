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
        string s;
        cin >> s;
        int ab = 0, ba = 0;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='a' && s[i+1]=='b')
                ab++;
            if(s[i]=='b' && s[i+1]=='a')
                ba++;
        }
        if(ab==ba)
            cout << n << endll;
        else
        {
            char f = s.front(), l = s.back();
            ab = n, ba = n;
            for (int i = 0; i < n-1; i++)
            {
                if(s[i]!=f)
                    break;
                ab--;
            }
            for (int i = n-1; i >= 0; i--)
            {
                if(s[i]!=l)
                    break;
                ba--;
            }
            cout << max(ab, ba) << endll;
        }
        
    }
    return 0;
}