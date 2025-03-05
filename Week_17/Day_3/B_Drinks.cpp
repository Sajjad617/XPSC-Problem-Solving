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
    
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    double total = 0;
    for (int i = 0; i < t; i++)
    {
        int x;
        cin >> x;
        total += x;
    }
    cout << fixed << setprecision(12) << total/t << endl;
    return 0;
}