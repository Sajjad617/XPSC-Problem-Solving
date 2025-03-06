#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    int n, k;
    cin >> n >> k;
    // string s1;
    // cin >> s1;
    int cal = n/k;
    
    if(cal*k < n)
    {
        cal++;
        cout << (cal*k)-n << endl;
        // cout << (cal*k) << " "  << n << " " << k  << endl;
    }
    else
        cout << 0 << endl;
    // cout << n/k << endl;
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