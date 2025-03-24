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
    string s1;
    cin >> s1;
    for(int i=0; i<n; i++)
    {
        if(s1[i]-'0' >= k)
        {
            cout << s1[i];
        }
        else
        {
            cout << k;
            for (int j = i; j < n; j++)
            {
                cout << s1[j];
            }
            nl;
            return;
            
        }
    }
    cout << k << endl;
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