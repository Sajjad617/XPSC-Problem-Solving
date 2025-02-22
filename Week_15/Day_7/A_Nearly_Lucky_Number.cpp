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
    ll n;
    cin >> n;
    bool flag = true;
    int cnt = 0;
    while(n!=0)
    {
        int cal = n%10;
        // cout << cal << endl;

        if(cal == 4 || cal == 7)
        {
            cnt++;
            
        }
        n /=10;
    }
    // cout << cnt << endl;
    if(cnt==4 || cnt==7)
        Y;
    else
        no;
    return 0;
}