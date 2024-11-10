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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        string s;
        cin >> s;
        vector<int> like, dislike;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
            {
                like.push_back(v[i]);
            }
            else
            {
                dislike.push_back(v[i]);

            }
        }
        sort(like.begin(), like.end());
        sort(dislike.begin(), dislike.end());
        // for(auto x : like)
        //     cout << x << " ";

        // for(auto x : dislike)

        //     cout << x << " ";
        // cout << like.size() << "<>" << dislike.size() << endll;
        int cnt = 1;
        map<int, int> mp;
        for (int i = 0; i < like.size(); i++)
        {
            // cout << like[i] << " ";
            // cout << "***" << endll;
            mp[like[i]] = cnt;
            cnt++;
            /* code */
        }
        // cout << cnt;

        for (int i = 0; i < dislike.size(); i++)
        {
            // cout << dislike[i] << " ";
            // cout << "+++" << endll;
            mp[dislike[i]] = cnt;
            cnt++;
            /* code */
        }
        // cout << cnt << endll;
        for (int i = 0; i<n; i++)
        {
            // cout << v[i] << "<>" <<  mp[v[i]] << endll;
            cout << mp[v[i]] << " ";
            /* code */
        }
        cout << endll;
        
    }
    return 0;
}