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
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> fn;
        vector<int> fm;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x < k)
                fn.push_back(x);
        }
        for (int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            if(x < k)
                fm.push_back(x);
        }
        int cn = 0, cm = 0;
        for (int i = 0; i < fn.size(); i++)
        {
            for (int j = 0; j < fm.size(); j++)
            {
                if((fn[i]+fm[j]) <= k)
                {
                    cn++;
                }
            }
            
        }
        
        // cout << "*" << endl;
        // cout << k << endl;
        cout << cn << endl;
        
    }
    return 0;
}