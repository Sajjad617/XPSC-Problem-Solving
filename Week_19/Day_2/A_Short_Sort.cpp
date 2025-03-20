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
    string s1;
    cin >> s1;
    if(s1[0]=='a' || s1[1]=='b' || s1[2]=='c')
        Y;
    else
        no;
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