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
    if((s1!="101") && s1.size()>2 && s1[2]!='0' && s1[0]=='1' && s1[1]=='0')
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