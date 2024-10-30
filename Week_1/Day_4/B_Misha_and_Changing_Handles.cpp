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
    
    int n;
    cin >> n;
    map<string, string> f, b;
    for (int i = 0; i < n; i++)
    {
        string s1;
        string s2;
        cin >> s1 >> s2;
        if(b.find(s1) != b.end())
        {
            string s = b[s1];
            f[s] = s2;
            b.erase(s1);
            b[s2] = s;

        }
        else
        {
            f[s1] = s2;
            b[s2] = s1;
        }
    }
    
    cout << f.size() << endll;
    for(auto x : f)
    {
        cout << x.first << " " << x.second << endll;
    }
    
    return 0;
}