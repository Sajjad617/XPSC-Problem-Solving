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
    // string s1;
    // cin >> s1;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<int> r(n);
    r[0] = 0;
    r[1] = 1;
    for (int i = 2; i < n; i++)
    {
        if(v[i]-v[i-1] < v[i-1]-v[i-2])
            r[i] = r[i-1]+1;
        else
            r[i] = r[i-1]+v[i]-v[i-1];
    }
    vector<int> l(n);
    l[n-1] = 0;
    l[n-2] = 1;
    for (int i = n-3; i >= 0; i--)
    {
        if(v[i+1]-v[i] < v[i+2]-v[i+1])
            l[i] = l[i+1]+1;
        else
            l[i] = l[i+1]+v[i+1]-v[i];
    }
    
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        if(a < b)
            cout << r[b]-r[a] << endl;
        else
            cout << l[b]-l[a] << endl;
    }
    
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