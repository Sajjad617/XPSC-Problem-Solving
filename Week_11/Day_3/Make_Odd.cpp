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
        string s1;
        string s2;
        cin >> s1 >> s2;
        bool flag = false;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0; i<n; i++)
        {
            if(s1[i]=='1')
                cnt1++;
            if(s2[i]=='1')
                cnt2++;
        }

        if(cnt1%2==1 || cnt2%2==1)
            Y;
        else
        {
            for(int i=0; i<n; i++)
            {
                if(s1[i]=='1' && s2[i]=='0')
                {
                    flag = true;
                    break;
                }
                if(s1[i]=='0' && s2[i]=='1')
                {
                    flag = true;
                    break;
                }
            }
            if(flag)
                Y;
            else
                no;
        }
        
    }
    return 0;
}