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
        // cout << "\n1" << endll;
        string s1;
        string s2;
        cin >> s1 >> s2;
        // cout << s1[s1.size()-1] << "<>" << s2[s2.size()-1] << endll;
        if(s1[s1.size()-1]==s2[s2.size()-1])
        {
            if(s1.size() == s2.size())
                cout << "=" << endll;
            else if(s1[s1.size()-1]=='S')
            {
                if(s1.size() > s2.size())
                    cout << "<" << endll;
                else
                    cout << ">" << endll;
            }
            else if(s1.size() > s2.size())
                cout << ">" << endll;
            else
                cout << "<" << endll;
        }
        else if (s1[s1.size()-1]=='S' && s2[s2.size()-1]=='M')
            cout << "<" << endll;
        else if (s1[s1.size()-1]=='S' && s2[s2.size()-1]=='L')
            cout << "<" << endll;
        else if (s1[s1.size()-1]=='M' && s2[s2.size()-1]=='L')
            cout << "<" << endll;
        else if (s1[s1.size()-1]=='M' && s2[s2.size()-1]=='S')
            cout << ">" << endll;
        else if (s1[s1.size()-1]=='L' && s2[s2.size()-1]=='S')
            cout << ">" << endll;
        else if (s1[s1.size()-1]=='L' && s2[s2.size()-1]=='M')
            cout << ">" << endll;
        
    }
    return 0;
}
// s m l 