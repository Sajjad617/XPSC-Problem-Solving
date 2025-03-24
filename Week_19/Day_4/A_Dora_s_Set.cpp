#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    // int n;
    // cin >> n;
    // string s1;
    // cin >> s1;
    int a, b;
    cin >> a >> b;
    if(a%2==0)
        a++;
    
    int re = 0;
    if(abs(a-b) >= 2)
    {
        while(a+2 <= b)
            re++, a+=4;
    }
    cout << re << endl;
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