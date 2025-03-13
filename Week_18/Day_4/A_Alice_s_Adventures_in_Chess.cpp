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
        int a, b, c;
        cin >> a >> b >> c;
        string s;
        cin >> s;
        int cal = 10000;
        int x = 0;
        int y = 0;
        bool flag = false;
        while(cal--)
        {
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]=='N')
                {
                    y++;
                }
                else if(s[i]=='E')
                {
                    x++;
                }
                else if(s[i]=='S')
                {
                    y--;
                }
                else if(s[i]=='W')
                {
                    x--;
                }
                if(x==b && y==c)
                {
                    flag = true;
                }
                
            }
        }

        if(flag)
            Y;
        else
            no;
    }
    return 0;
}