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
        int l=1, r=n*n;
        bool flag = true;
        vector<vector<int>> v(n, vector<int>(n, 0));
        for (int j = 0; j < n; j++)
        {
            if(flag)
            {
                for (int i = 0; i < n; i++)
                {
                    if(i%2)
                    {
                        v[j][i] = r;
                        r--;
                    }
                    else
                    {
                        v[j][i] = l;
                        l++;

                    }
                }
                flag = false;
            }
            else
            {
                for (int i = n-1; i >= 0; --i)
                {
                    if(i%2)
                    {
                        v[j][i] = l;
                        l++;
                    }
                    else
                    {
                        v[j][i] = r;
                        r--;

                    }
                }
                flag = true;
            }
        }
        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cout << v[j][i] << " ";
            }
            nl;
        }
    }
    return 0;
}