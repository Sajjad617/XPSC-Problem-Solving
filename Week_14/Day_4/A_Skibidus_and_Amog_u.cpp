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
        if(s[s.size()-1]=='s' && s[s.size()-2]=='u')
        {
            s.pop_back();
            s.pop_back();
            s.push_back('i');
        }
        else
        {
            s.pop_back();
            s.push_back('u');
            s.push_back('s');
        }
        cout << s << endl;
    }
    return 0;
}