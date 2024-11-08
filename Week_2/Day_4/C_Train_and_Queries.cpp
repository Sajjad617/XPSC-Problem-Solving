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
        int n, q;
        cin >> n >> q;
        map<int, vector<int>> mp;
        for(int i=1; i<=n; i++)
        {
            int x;
            cin >> x;
            mp[x].push_back(i);
        }
        for(int i=1; i<=q; i++)
        {
            int f, l;
            cin >> f >> l;

            if(mp.find(f)==mp.end() || mp.find(l)==mp.end())
                no;
            else
            {
                int start_value = *mp[f].begin();
                int end_value = *mp[l].rbegin();
                if(start_value < end_value)
                    Y;
                else
                    no;
                /* code */
            }
            
        }



    }
    return 0;
}