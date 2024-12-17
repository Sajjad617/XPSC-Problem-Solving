#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int mn = abs(v[0]-v[1]);
        vector<int> re;
        re.push_back(mn);
        for (int i = 1; i <= n-1; i++)
        {   
            if (i==n-1)
            {
                mn = abs(v[i]-v[i-1]);
            }
            else
            {
                mn = abs(v[i]-v[i-1]);
                mn = max(mn, abs(v[i]-v[i+1]));
            }
            
            re.push_back(mn);
        }
        sort(re.begin(), re.end());
        cout << re[0] << endll;  
    }
    return 0;
}