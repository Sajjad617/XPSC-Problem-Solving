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
        int n, total, k;
        cin >> n >> total >> k;
        total = abs(total);
        int cal = total/k;
        if(total%k!=0)
            cal++;
        
        if(total==0)
            cout << 0 << endl;
        else if(cal <= n)
            cout << cal << endl;
        else
            cout << -1 << endl;

    }
    return 0;
}