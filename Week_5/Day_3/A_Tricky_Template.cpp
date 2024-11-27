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
        string a, b, c;
        cin >> a >> b >> c;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(a[i]==c[i] || b[i]==c[i])
                cnt++;
        }
        // cout << cnt << "<>" << n << endll;
        if(cnt==n)
            no;
        else
            Y;
    }
    return 0;
}