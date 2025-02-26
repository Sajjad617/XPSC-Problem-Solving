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
    int cnt = 0;
    while(t--)
    {
        int a, b;
        cin >> a >> b;
        
        if(a-b <= -2)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}