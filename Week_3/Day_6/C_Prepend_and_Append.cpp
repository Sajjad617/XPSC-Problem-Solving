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
        string s;
        cin >> s;
        int cnt=0;
        int sz = s.size();
        for(int i=0; i<sz/2; ++i)
        {

            if(s[i]=='0' && s.back()=='0' || s[i]=='1' && s.back()=='1' )
                break;
            s.pop_back();
            cnt++;
            
        }
        cout << sz-(cnt*2) << endll;
        
    }
    return 0;
}