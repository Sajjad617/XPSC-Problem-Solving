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
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;

        int cnt = 0;
        int l = 0;
        for(int i=0; i<m; i++)
        {
            if(s2[i]==s1[l])
            {
                l++;
                cnt++;
            }
            
        }
        cout << cnt << endl;
    }
    return 0;
}