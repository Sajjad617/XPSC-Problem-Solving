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
        string cal = "00000";
        string tt = "Timur";
        
        if(n==5)
        {
            for(int i=0; i<n; i++)
            {
                if(s[i]=='T')
                    cal[0] = 'T';
                else if(s[i]=='i')
                    cal[1] = 'i';
                else if(s[i]=='m')
                    cal[2] = 'm';
                else if(s[i]=='u')
                    cal[3] = 'u';
                else if(s[i]=='r')
                    cal[4] = 'r';   
            }
            if(cal==tt)
                Y;
            else
                no;
        }
        else
            no;
    }
    return 0;
}