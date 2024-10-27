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
    string s;
    cin >> s;
    vector<int> v;
    v.assign(26, -1);
    // cout << v[25];
    int sz = s.size();
    // // cout << sz;
    for(int i=0; i<sz; i++)
    {
        int cal = s[i]-'a';
        v[cal] = 1;
        // cout << cal << " ";
    }
    
    for(int i=0; i<26; i++)
    {
        if(v[i]!=1)
        {
            char c = i+'a';
            cout << c << endl;
            return 0;
        }
    }
    cout << "None" << endll;

    return 0;
}