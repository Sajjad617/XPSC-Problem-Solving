#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    ll a, b;
    cin >> a >> b;
    ll cnt = 0, x = a+b;
    while(x != (cnt*(cnt+1))/2)
        cnt++, x--;
    
    cout << a-cnt << endl;
    return 0;
}