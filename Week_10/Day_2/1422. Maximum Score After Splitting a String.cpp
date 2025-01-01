#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
int maxScore(string s) 
{
        int one = 0, zero = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0')
                zero++;
            else if(s[i]=='1')
                one++;
        }
        // cout  << zero << "<>" << one << endll;
        int mx = INT_MIN;
        int cnt = 0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='0')
            {
                cnt++;
            }
            else if(s[i]=='1')
            {
                one--;
            }
            mx = max(mx, (cnt+one));
            // cout << mx << endll;
        }
        return mx;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << maxScore(s) << endll;
    return 0;
}