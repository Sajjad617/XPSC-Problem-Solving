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
    vector<int> v1(n+1), v2(n+2, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v1[i];
        /* code */
    }
    for (int i = 1; i <= n; i++)
    {
        v2[v1[i]] = 1;
        if(i>1 && v2[v1[i]-1]!=0 && v2[v1[i]+1]!=0)
        {
            no;
            return;
        }
    }
    Y;
    
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