#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int total = (n+1)*50;
        // total = total/2;
        int cal = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            cal += v[i];
            /* code */
        }
        
        if(total-cal>100)
            cout << -1 << endll;
        else if(cal>=total)
            cout << 0 << endll;
        else
            cout << total-cal << endll;
        
    }
    return 0;
}