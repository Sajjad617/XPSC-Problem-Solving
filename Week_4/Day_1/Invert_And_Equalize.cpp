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
        int cnt0 = 0, cnt1=0;
        bool flag0 = false, flag1 = false;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0' && !flag0)
            {
                // cout << "<0>" << s[i];
                cnt0++;
                flag0 = true;
                flag1 = false;

            }
            else if(s[i]=='1' && !flag1)
            {
                // cout << "<1>" << s[i];
                cnt1++;
                flag0 = false;
                flag1 = true;

            }
            // cout << endll;
            /* code */
        }

        // cout << cnt1 << "<>" << cnt0<< endll;
        cout << min(cnt1, cnt0)<< endll;
        
    }
    return 0;
}