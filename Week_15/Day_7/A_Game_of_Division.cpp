#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    int n, k;
    cin >> n >> k;
    vector < vector <int> > v(k);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        v[x % k].push_back(i);
    }
    for (int i = 0; i < k; i++)
    {
        if(v[i].size()==1)
        {
            Y;
            cout << v[i][0] << endl;
            return;
        }
    }
    no;
        
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