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
        string s1;
        string s2;
        cin >> s1 >> s2;
        for (int i = 0; i < s1.size(); i++)
        {
            if(s1[i]=='B')
                s1[i] = 'G';
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if(s2[i]=='B')
                s2[i] = 'G';
        }
        bool flag = false;
        for (int i = 0; i < s2.size(); i++)
        {
            if(s1[i]!=s2[i])
                flag = true;
        }
        if(flag)
            no;
        else
            Y;

        
        
    }
    return 0;
}