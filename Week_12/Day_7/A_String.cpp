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
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1')
                cnt++;
            /* code */
        }
        cout << cnt << endl;
        
    }
    return 0;
}