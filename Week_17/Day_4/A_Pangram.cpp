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
    set<char> mp;
    for(int i=0; i<n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 'a' - 'A';
        
        mp.insert(s[i]);

    }
    
    if(mp.size()==26)
        Y;
    else
        no;
    return;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    game();

    return 0;
}