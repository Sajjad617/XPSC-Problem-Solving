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
        int n;
        cin >> n;
        if(n%2==0)
            cout << -1 ;
        else
        {
            int l = 1;
            int r = n-1;
            for (int i = 0; i < n; i++)
            {
                if(i & 1)
                {
                    cout << r << " ";
                    r -= 2;
                }
                else
                {
                    cout << l << " ";
                    l += 2;
                }
            }            
        }
        cout << endll;
    }
    return 0;
}