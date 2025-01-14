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
        int  n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int z = 0, o = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]==0)
                z++;
            if(v[i]==1)
                o++;
            
        }
        ll cal = pow(2, z)*o;
        cout << cal << endl;
        
    }
    return 0;
}