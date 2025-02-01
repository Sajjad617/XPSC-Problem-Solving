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
        int n, k;
        cin >> n >> k;
        string s, ans="";
        vector<string> v;
        for (int i = 0; i < n; i++)
        {
            cin >> s;
            if(i%k==0)
            {
                for (int j = 0; j < s.size(); j+=k)
                {
                    ans.push_back(s[j]);
                    /* code */
                }
                v.push_back(ans);
                ans.clear();
            }
                
                
            /* code */
        }
        for(auto x : v)
            cout << x << endl;
        
    }
    return 0;
}