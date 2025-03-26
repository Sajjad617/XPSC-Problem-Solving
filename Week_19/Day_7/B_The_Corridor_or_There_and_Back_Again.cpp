#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    // string s1;
    // cin >> s1;
    int n;
    cin >> n;
    int re = INT_MAX, cal;;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if(b%2==0)
        {
            cal = a+((b-2)/2);
        }
        else
        {
            cal = a+(b/2);
        }
        re = min(re, cal);
        /* code */
    }
    cout << re << endl;
    
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