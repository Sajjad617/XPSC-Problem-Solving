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
        string s1, s2;
        cin >> s1 >> s2;
        if(s1 == s2)
        {
            Y;
            continue;
        }
        int pos = -1;
        for (int i = 0; i < n; i++)
        {
            if(s1[i]=='1')
            {
                pos = i;
                break;
            }
        }

        if(pos != -1)
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if(s1[i] != s2[i])
                {
                    if(pos > i)
                    {
                        flag = false;
                        break;
                    }
                }
            }  
            if(flag)
                Y;
            else
                no;
        }
        else
            no;
        

    }
    return 0;
}