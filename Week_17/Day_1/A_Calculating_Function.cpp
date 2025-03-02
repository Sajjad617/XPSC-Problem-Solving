#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll t;
    cin >> t;
    if(t%2==0)
        cout << t/2 << endl;
    else
    {
        cout << -((t+1)/2) << endl;
    }
    
    return 0;
}