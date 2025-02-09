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
        int cnt= 0;
        int n = s.size(); 

        for(int i=0; i<n-1; i++)
        {
            if(s[i] == s[i+1])
            {
                cnt++;
                s.erase(i+1,1);
                --i;
                --n;
            }
            
        }
        if(cnt && s.size()>1)
            cout << 1 << endl;
        else
            cout << s.size() << endl;

        // s.erase(3,1);

        // cout << s << endl;

    }
    return 0;
}