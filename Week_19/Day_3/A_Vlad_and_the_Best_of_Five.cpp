#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "A" << endll
#define no cout << "B" << endll
#define nl cout << endll
void game()
{
    // int n;
    // cin >> n;
    string s1;
    cin >> s1;
    int a = 0;
    for(auto x : s1)
    {
        if(x=='A')
            a++;
    }
    if(a>2)
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