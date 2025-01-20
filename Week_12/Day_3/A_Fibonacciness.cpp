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
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int cal = 0;
        for (int i = -101; i < 102; i++)
        {
            cal = max(cal, (i==a+b)+(c==b+i)+(d==i+c));
            /* code */
        }
        cout << cal << endl;
        
    }
    return 0;
}