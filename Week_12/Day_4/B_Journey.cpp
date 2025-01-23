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
        int n, a, b, c;
        cin >> n >> a >> b >> c;
        ll total = a+b+c+0LL;
        ll cal = n/total;
        total = (cal+1)*total;
        cal++;
        cal *= 3;
        while(total>=n)
        {
            total = total-c;
            cal--;
            if(total<n)
                break;
            total = total-b;
            cal--;
            if(total<n)
                break;
            total = total-a;
            cal--;
            if(total<n)
                break;
        }
        cout << cal+1 << endl;
    }
    return 0;
}