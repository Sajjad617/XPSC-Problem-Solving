#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
int result( int n, int k)
{
    int cal = (n/2) + (n%2);
    if(cal >= k)
        return (2*k)-1;
    return 2*(result(n/2, k-cal));
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        cout << result(n, k) << endl;
    }
    return 0;
}