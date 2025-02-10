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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        // int nk = 2*k;
        int res = k, even = 0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]%2==0)
                even++;
            if(v[i]%k==0)
                res = 0 ;
            
            res = min(res, k-v[i]%k); 
        }
        if(k==4)
        {
            if( even > 1) 
                res = 0;
            else if(even == 1)
                res = min(res, 1);
            else
                res = min(res, 2);
        }
        cout << res << endl;

        
    }
    return 0;
    
}