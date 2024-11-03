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
        string s;
        cin >> s;
        // map<char, int> mp;
        string cal;
        // cal.push_back('x');
        // cal.push_back('x');
        // cout << cal << endll;
        // cout << s[s.size()-1] << endll;
        if(s.size()!=1)
        {
            bool flag = true;
            for (int i = 0; i < s.size()-1; i++)
            {
                if(flag && s[i] == s[i+1])
                {
                    cal.push_back(s[i]);
                    if(s[i]=='f')
                        cal.push_back('g');
                    else
                        cal.push_back('f');
                    
                    flag = false;
                }
                else
                    cal.push_back(s[i]);
            }
        }
        // char x = s.size()-1;
        cal.push_back(s[s.size()-1]);
        if(s.size()==cal.size())
        {
            // cout << 1 << endll;
            if(s[s.size()-1]=='f')
                cal.push_back('g');
            else
                cal.push_back('f');

            cout << cal << endll;        
        }
        else
            cout << cal << endll;

        
    }
    return 0;
}