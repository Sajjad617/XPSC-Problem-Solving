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
    vector<int> v(n);
    for (int i = 0; i < n-2; i++)
    {
        cin >> v[i];
    }
    // if(v.size()<3)
    // {
    //     Y;
    //     return;
    // }
    for (int i = 0; i < n-4; i++)
    {
        if(v[i]==1 && v[i+1]==0 && v[i+2]==1)
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