#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    // string s1;
    // cin >> s1;
    // int n;
    // cin >> n;
    string s;
    string c = "codeforces";
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < 10; i++)
    {
        if(s[i] != c[i])
        {
            cnt++;
        }
    }
    cout << cnt << endl;
    return;
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