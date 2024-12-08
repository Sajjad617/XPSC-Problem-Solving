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
        reverse(v.begin(), v.end());
        while(!v.empty() && v.back()==0)
        {
            v.pop_back();
        }
        if(v.empty())
        {
            cout << 0 << endll;
            continue;
        }
        reverse(v.begin(), v.end());
        // for(auto x : v)
        //     cout << x << " ";
        // cout << endll;    
        // cout << endll;    
        ll cal = 0;
        for (int i = 0; i < v.size()-1; i++)
        {
            if(v[i]==0)
                cal++;
            else
                cal += v[i];
        }
        cout << cal << endll;
    }
    return 0;
}