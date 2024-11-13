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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        vector<ll> cng_value; 
        ll cnt = 0, total = 0;
        for (int  i = 0; i < n; i++)
        {
            ll L = i;
            ll R = n-1-i;
            if(s[i]=='L')
            {
                if(R>L)
                {
                    cnt++;
                    total += R;
                    cng_value.push_back(R-L);
                }
                else
                {
                    total += L;
                }
            }
            else
            {
                if(R>L)
                {
                    total += R;
                }
                else
                {
                    cnt++;
                    cng_value.push_back(L-R);
                    total += L;
                }
            }
            
        }
        vector<ll> final(n+1, total);
        // cout << final[0] << endll;
        sort(cng_value.begin(), cng_value.end(), greater<ll> ());
        ll x = total;
        for (int i = cnt-2; i >= 0; i--)
        {
            x -= cng_value.back();
            final[i] = x;
            cng_value.pop_back();
            /* code */
        }

        for (int i = 0; i < n; i++)
        {
            cout << final[i] << " ";
            
        }
        // for (int i = 0; i < cng_value.size(); i++)
        // {
        //     cout << cng_value[i] << " ";
            
        // }
        // cout << cnt;
        // // cout << endll << cng_value.size() << endll;
        cout << endll;
        

         
    }
    return 0;
}