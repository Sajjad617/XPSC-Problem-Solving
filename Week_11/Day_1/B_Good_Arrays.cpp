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
        ll total = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            total += v[i];

            if(v[i]==1)
                cnt++;
        }
        if(total >= (cnt+n) && n > 1)
            Y;
        else
            no;
        
    }
    return 0;
}