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
        vector<int> v;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        vector<pair<int, string>> pr;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            string s;
            cin >> s;

            for(int j=0; j<x; j++)
            {
                if(s[j]=='U')
                    v[i]--;
                if(s[j]=='D')
                    v[i]++;
            }
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]>=10)    
                cout << v[i]-10 << " ";
            else if(v[i]<0)
                cout << v[i]+10 << " ";
            else
                cout << v[i] << " ";


            
        }
        cout << endll;
        
    }
    return 0;
}