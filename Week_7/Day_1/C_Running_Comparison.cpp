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
        vector<int> alice(n);
        vector<int> bob(n);
        for (int i = 0; i < n; i++)
        {
            cin >> alice[i];
            /* code */
        }
        for (int i = 0; i < n; i++)
        {
            cin >> bob[i];
            /* code */
        }
        int cal = 0;
        for (int i = 0; i < n; i++)
        {
            if(alice[i] < bob[i])
            {
                if(alice[i]>=(bob[i]/2))
                    cal++;
            }
            else
            {
                if(bob[i]>=(alice[i]/2))
                    cal++;
            }
        }
        cout << cal << endll;

        
    }
    return 0;
}