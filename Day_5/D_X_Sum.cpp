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
        int a[n+1][m+1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> a[i][j];
                /* code */
            }
            /* code */
        }
        int mx = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int cal = 0;
                cal += a[i][j];
                int r = i+1, c = j+1;
                r = i+1;
                c = j+1;
                while(r<n && c<m)
                    cal += a[r++][c++];
                r = i+1;
                c = j-1;
                while(r<n && c>=0)
                    cal += a[r++][c--];
                r = i-1;
                c = j-1;
                while(r>=0 && c>=0)
                    cal += a[r--][c--];
                r = i-1;
                c = j+1;
                while(r>=0 && c<m)
                    cal += a[r--][c++];
                
                mx = max(cal, mx);
                
            }
        }
        
        cout << mx << endll;
    }
    return 0;
}