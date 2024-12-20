#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        vector<ll> v(n);
        string s = "";
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(v.size()==1)
            cout << 1 << endll;
        else
        {
            s = "11";
            int l = v[0];
            int r = v[1];
            for (ll i = 2; i < n; i++)
            {
                if(!(v[i]==l) && l >= r)
                {
                    if(v[i]==l || v[i]==r)
                        s.push_back('1');
                    else if(v[i] > r)
                    {
                        s.push_back('1');
                        r = v[i];
                    }
                    else
                        s.push_back('0');
                }
                else
                {
                    if(v[i]<=l)
                        s.push_back('1');
                    else if(v[i] >= r)
                    {
                        s.push_back('1');
                        r = v[i];
                    }
                    else
                        s.push_back('0');

                }
            }
            cout << s << endll;
            
        }

        
    }
    return 0;
}