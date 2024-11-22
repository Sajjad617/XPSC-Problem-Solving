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
        string s;
        cin >> s;
        char f = s.front(), l = s.back();
        vector<pair<char, int>> pr;
        for (int i = 1; i < s.size()-1; i++)
        {
            if(s[i]>=min(f, l) && s[i]<= max(f, l))
                {
                    pr.push_back({s[i], i+1});
                }
        }
        sort(pr.begin(), pr.end());
        if(f > l)
            reverse(pr.begin(), pr.end());
        
        cout << abs(f-l) << " " << pr.size()+2 << endll;
        cout << 1 << " ";
        for(auto x : pr)
            cout << x.second << " ";
        cout << s.size() << " ";
        cout << endll;

    }
    return 0;
}