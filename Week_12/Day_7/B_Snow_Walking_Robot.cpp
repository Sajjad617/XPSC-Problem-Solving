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
        int l, r, d, u, m;
        l = r = d = u = m = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='L')
                l++;
            else if(s[i]=='R')
                r++;
            else if(s[i]=='D')
                d++;
            else if(s[i]=='U')
                u++;
            /* code */
        }
        l = min(l, r);
        r = l;
        d = min(d, u);
        u = d;
        string st = "";
        if(u && l && r && d)
        {
            while(u--)
                st.push_back('U');

            while(r--)
                st.push_back('R');

            while(d--)
                st.push_back('D');

            while(l--)
                st.push_back('L');
        }
        else{
            if(r && l)
                st = "LR";
            else if(u && d)
                st = "UD";
        }
        cout << st.size() << endl;
        cout << st << endl;

    }
    return 0;
}