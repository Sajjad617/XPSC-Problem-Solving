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
    string s1, s2;
    cin >> s1 >> s2;
    swap(s1[0], s2[0]);
    cout << s1 << " " << s2 << endl;
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