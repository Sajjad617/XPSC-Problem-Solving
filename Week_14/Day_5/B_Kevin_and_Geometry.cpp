#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void fun()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    sort(v.begin(), v.end());

    vector<int> dv;
    for(auto x : mp)
    {
        if(x.second >= 2)
            dv.push_back(x.first);
    }

    if(dv.size() > 1)
    {
        cout << dv[0] << " " << dv[0] << " " << dv[1] << " " << dv[1] << endl;
        return;
    }
    else if(dv.size() == 1)
    {
        vector<int> vdif;
        bool flag = true;
        int x = dv[0];
        int y = 2;
        for(int i=0; i<n; i++)
        {
            if(v[i]==x && y>0)
            {
                y--;
                continue;
            }
            vdif.push_back(v[i]);
        }
        sort(vdif.begin(), vdif.end());
        
        for(int i=0; i<vdif.size()-1; i++)
        {
            if((2*x) > abs(vdif[i]-vdif[i+1]))
            {
                flag = false;
                cout << dv[0] << " " << dv[0] << " " << vdif[i] << " " << vdif[i+1] << endl;
                return;
            }
        }
    }
    cout << -1 << endl;
    return;
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        fun();
        
    }
    return 0;
}