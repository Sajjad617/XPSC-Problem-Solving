#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    int n;
    cin >> n;
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    int zero = 0, one=0;
    for (int i = 0; i < n; i++)
    {
        if(s1[i]=='0')
            zero++;
        else
            one++;
        if(s2[i]=='0')
            zero++;
        else
            one++;
        if(s3[i]=='0')
            zero++;
        else
            one++;
    }
    
    if(zero==0 || one==0)
    {
        cout << 0 << endl;
        return;
    }
    if(zero==n || one==n)
    {
        if(zero < one)
        {   int mx = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            int cnt3 = 0;
            for(int i=0; i<n; i++)
            {
                if(s1[i]=='1')
                    cnt1++;
                if(s2[i]=='1')
                    cnt2++;
                if(s3[i]=='1')
                    cnt3++;
            }
            mx = min(cnt1, cnt2);
            cout << min(mx, cnt3) << endl;
            return;
        }
        else
        {
            int mx = 0;
            int cnt1 = 0;
            int cnt2 = 0;
            int cnt3 = 0;
            for(int i=0; i<n; i++)
            {
                if(s1[i]=='0')
                    cnt1++;
                if(s2[i]=='0')
                    cnt2++;
                if(s3[i]=='0')
                    cnt3++;
            }
            mx = min(cnt1, cnt2);
            cout << min(mx, cnt3) << endl;
            return;
        }
    }
    cout << -1 << endl;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        game();

        
    }
    return 0;
}