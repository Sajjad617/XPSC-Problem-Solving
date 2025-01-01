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
        for (int i = 1; i <= n; i++)
        {
            if(i%2==1)
            {
                for(int j=1; j<=n; j++)
                    cout << j << " ";
            }
            else{
                for(int j=n; j>=1; j--)
                    cout << j << " ";
            }
            nl;
        }
        
    }
    return 0;
}