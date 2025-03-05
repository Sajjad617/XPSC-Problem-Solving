#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    int n, a, b;
    cin >> n >> a >> b;
    // string s1;
    // cin >> s1;
    int cal = min(a, b);
    int total = n/cal;
    if(total*cal==n)
        cout << total << endl;
    else
        cout << total+1 << endl;

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