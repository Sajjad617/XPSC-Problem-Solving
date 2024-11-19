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
        int a, b, n, total;
        cin >> a >> b >> n >> total;
        int cal = min((total/n), a);

        // cout << total-cal << endll;
        if(total-(cal*n)<=b)
            Y;
        else
            no;
    }
    return 0;
}