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
        int n, c;
        cin >> n >> c;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] += i+1;
            /* code */
        }
        int total = 0, cnt = 0;
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            total += v[i];
            if(total<=c)
                cnt++;
            else
                break;
        }
        cout << cnt << endll;

        
    }
    return 0;
}