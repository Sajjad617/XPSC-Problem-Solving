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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
        }
        bool flag = false;
        for (int i = 0; i < n-1; i++)
        {
            int mn = min(v[i], v[i+1]);
            int mx = max(v[i], v[i+1]);
            if(2*mn > mx)
            {
                flag = true;
                break;
            }
        }
        if(flag)
            Y;
        else
            no;
        
    }
    return 0;
}