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
        string r = "";
        for (int i = n-1; i >=0; i--)
        {
            if(s[i]=='0')
            {
                --i;
                int x = s[i]-48;
                --i;
                int y = (s[i]-48)*10;
                char z = x+y+96;
                // cout << z;
                r.push_back(z);

            }
            else
            {
                char x = s[i]+48;
                r.push_back(x);
                // cout << x;
            }
        }
        reverse(r.begin(), r.end());
        cout << r << endll;
        
    }
    return 0;
}