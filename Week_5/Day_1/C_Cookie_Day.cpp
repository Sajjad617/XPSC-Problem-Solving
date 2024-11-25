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
        int a, b;
        cin >> a >> b;
        vector<int> v(a);
        for (int i = 0; i < a; i++)
        {
            cin >> v[i];
            /* code */
        }
        int d = INT_MAX;
        bool flag = false;
        for (int i = 0; i < a; i++)
        {
            if(v[i]>=b)
            {
                flag = true;
                d = min(d, v[i]%b);
            }
            // cout << v[i]%b << endll; 
        }
        if(flag)
            cout << d << endll;
        else
            cout << -1 << endll;
            
        // cout << endll;
        
    }
    return 0;
}