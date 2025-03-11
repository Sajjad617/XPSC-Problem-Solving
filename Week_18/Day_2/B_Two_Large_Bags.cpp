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
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i += 2)
    {
        if(v[i] != v[i+1])
        {
            // s1 = "No";
            no;
            return;
        }
        for (int j=i+2; j < n; j++)
        {
            if(v[j]==v[i])
                v[j]++;
            else
                break;
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