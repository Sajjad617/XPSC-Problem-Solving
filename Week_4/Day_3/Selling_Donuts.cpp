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
        int n, m;
        cin >> n >> m;
        vector<int> vn(n), vm(m);
        for (int i = 0; i < n; i++)
        {
            cin >> vn[i];
            /* code */
        }
        for (int i = 0; i < m; i++)
        {
            cin >> vm[i];
            /* code */
        }
        int cnt = 0;
        for (int i = 0; i < m; i++)
        {
            int idx = vm[i]-1;
            if(vn[idx]<=0)
                cnt++;
            else
                vn[idx]--;
        }
        cout << cnt << endll;

        
    }
    return 0;
}