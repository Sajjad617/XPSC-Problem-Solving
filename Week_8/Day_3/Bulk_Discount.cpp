#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        int cal = 0;
        ll total = 0;
        for (int i = 0; i < n; i++)
        {
            ll z = v[i] - cal;
            if(z > 0)
                total += z;
            cal++;
        }
        cout << total << endll;


        
    }
    return 0;
}