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
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        bool fodd = true, feven = true;
        ll oddM = 0, evenM = 0, cnt = 0; 
        for (int i = 0; i < n; i++)
        {
            if(v[i]%2)//odd
            {
                fodd = false;
                oddM = max(oddM, v[i]*1LL);
            }
            else // even
            {
                feven = false;
                evenM = max(evenM, v[i]*1LL);
                cnt++;

            }
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if(v[i]%2==0)//odd
            {
                if(oddM>v[i])
                    oddM +=v[i]*1LL;
            }

        }
        if(fodd || feven)
            cout << 0 << endll;
        else if(oddM>evenM)
            cout << cnt << endll;
        else
            cout << cnt+1 << endll;
        
    }
    return 0;
}