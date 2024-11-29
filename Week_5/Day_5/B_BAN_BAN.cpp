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
        string s = "BAN";
        string s1 = "";
        for (int i = 0; i < n; i++)
        {
            s1 += s;
            /* code */
        }
        int cnt = 0;
        vector<pair<int, int>> pr;
        int l = 1, r = s1.size()-1;
        while(l < r)
        {
            swap(s1[l], s1[r]);
            pr.push_back({l, r});
            cnt++;
            l += 3;
            r -= 3;

        }
        cout << cnt << endll;
        for(auto x : pr)
            cout << x.first << " " << x.second+1 << " ";
        cout << endll;
        // cout << s1 << endll;
        
    }
    return 0;
}