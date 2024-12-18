#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll n;
    cin >> n;
    string s = "";
    for (int i = 0; i < n/2; i++)
    {
        if(i%2==0)
        {
            s.push_back('a');
            s.push_back('a');

        }
        else
        {
            s.push_back('b');
            s.push_back('b');
        }
        /* code */
    }
    if(n==1)
        s.push_back('a');
    else
    {
        int sz = s.size();
        if(n%2==1)
            if(s[sz-1]=='a' && s[sz-2]=='a')
                s.push_back('b');
            else if(s[sz-1]=='b' && s[sz-2]=='b')
                s.push_back('a');
            else
                s.push_back('c');
    }

    cout << s << endll;
    // cout << s[sz-1] << "<>" <<  s[sz-2] << endl;
    
    return 0;
}