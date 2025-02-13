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
        string s;
        cin >> s;
        for(int i=1; i<=8; i++)
        {
            int x = s[1]-'0';
            if(x==i)
                continue;
                
            cout << s[0] << i << endl;
        }
        for(char i='a'; i<='h'; i++)
        {
            char x = s[0];
            if(x==i)
                continue;

            cout << i << s[1] << endl;
        }
    }
    return 0;
}