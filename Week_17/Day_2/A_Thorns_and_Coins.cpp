#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int mx = 0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='@')
            cnt++;
        else if(s[i]=='*' && s[i+1]=='*')
        {
            // mx = max(mx, cnt);
            // cnt = 0;
            break;
        }

    }
    mx = max(mx, cnt);
    cout << mx << endl;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        game();
    }
    return 0;
}