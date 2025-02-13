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
        string s1, s2, fir="", sec="";
        cin >> s1 >> s2;
        int n = s1.size();
        int m = s2.size();
        if(n==m)
        {
            // cout << n << " " << m;
            int cnt = 0;
            for (int i = 0; i < n; i++)
            {
                if(s1[i] != s2[i])
                {
                    cnt  = 1;
                    break;

                }
                /* code */
            }
            if(!cnt)
            {
                Y;
                cout << s1 << endl;
                continue;
            }
            
        }
        for(int i=0; i<n-1; i++)
        {
            for(int j=0; j<m-1; j++)
            {
                if(s1[i]==s2[j] && s1[i+1]==s2[j+1])
                {
                    fir = s1[i], sec = s1[i+1];
                    break;
                }
            }
            if(fir!="")
                break;
        }
        if(fir.size() && sec.size())
        {
            Y;
            cout << "*" << fir << sec << "*" << endl;
        }
        else
        {
            if(s1[0]==s2[0])
                Y, cout << s1[0] << "*" << endl;
            else if(s1[n-1]==s2[m-1])
                Y, cout << "*" << s1[n-1] << endl;
            else
                no;

        }
    }
    return 0;
}