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
        int x, y;
        cin >> x >> y;
        vector<int> v1(x), v2(x);
        for (int i = 0; i < x; i++)
        {
            cin >> v1[i] >> v2[i];
            
        }
        int cal = 2*(accumulate(v1.begin(), v1.end(), 0)+y-v1[0]+accumulate(v2.begin(), v2.end(), 0)+y-v2[0]);
        cout << cal << endl;
        
    }
    return 0;
}