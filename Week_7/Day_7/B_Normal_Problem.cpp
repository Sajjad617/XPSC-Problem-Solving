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
        string s;
        cin >> s;
        string f="";
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='p')
                s[i] = 'q';
            else if(s[i]=='q')
            {
                s[i] = 'p';
                // cout << s[i];
            }

        }
        reverse(s.begin(), s.end());
        cout << s << endll;
        
    }
    return 0;
}