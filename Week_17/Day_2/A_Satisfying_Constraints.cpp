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
    int l=0, r=INT_MAX;
    set<int> chr;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if(a==1)
            l=max(l, b);
        else if (a==2)
            r=min(r, b);
        else
            chr.insert(b);
    }
    if(r<l)
    {
        cout << 0 << endl;
        return;
    }
    int total = r-l+1;
    for(auto x : chr)
    {   
        // cout << x << " ";
        total -= (x>=l && x<=r);
        // cout << (x>=l && x<=r) << " ";
    }
    cout << total << endl;
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