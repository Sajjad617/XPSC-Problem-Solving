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
        vector<int> v(n+1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            /* code */
        }
        int mn = 1, mx = n;
        int start = 1, end = n;
        while(start <= n && end > 0)
        {
            if(v[start]==mn)
            {
                mn++;
                start++;
            }
            else if (v[start]==mx)
            {
                start++;
                mx--;
                /* code */
            }
            else if (v[end]==mn)
            {
                mn++;
                end--;
                /* code */
            }
            else if (v[end]==mx)
            {
                end--;
                mx--;
                /* code */
            }
            else
                break;
        }
        if(start>end)
            cout << -1 << endll;
        else
            cout << start << " " << end << endll;
        

    }
    return 0;
}