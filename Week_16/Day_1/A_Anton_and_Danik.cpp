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
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < t; i++)
    {
        if(s[i]=='D')
            cnt--;
        else
            cnt++;
    }
    if(cnt==0)
        cout << "Friendship" << endl;
    else if(cnt > 0)
        cout << "Anton" << endl;
    else
        cout << "Danik" << endl;
    
    return 0;
}