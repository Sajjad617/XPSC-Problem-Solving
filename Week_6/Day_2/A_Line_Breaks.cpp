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
        int n, k;
        cin >> n >> k;
        vector<int> v;
        int total = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int sz = s.size();
            v.push_back(sz);
            total += sz;
            if(total<=k)
                cnt++;
        }
        cout << cnt << endll;
        
    }
    return 0;
}