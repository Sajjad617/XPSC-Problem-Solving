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
    int a, b, c;
    cin >> a >> b >> c;
    int cnt = 0;
    if(a > b)
    {
        while(a>b)
        {
            cnt++;
            a-=c;
            b+=c;
        }
    }
    else if(a<b)
    {
        while(a<b)
        {
            cnt++;
            a+=c;
            b-=c;
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