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
        int n;;
        cin >> n;
        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            cin >> v[i];
        }
        ll total = 0, max_dif=0;
        for(int i=1; i<n; i++)
        {
            if(v[i] < v[i-1])
            {
                total += v[i-1]-v[i];
                max_dif = max(max_dif, (v[i-1]-v[i])*1LL);
                v[i] = v[i-1];
            }
        }
        total += max_dif;
        cout << total << endl;

    }
    return 0;
}