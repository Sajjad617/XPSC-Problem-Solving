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
        int q, n;
        cin >> q >> n;

        if(q==n)
            Y;
        else if(q<n)
            no;
        else
        {
            int cal = q-n;
            if(cal%2==0)
                Y;
            else
                no;
        }
    }
    return 0;
}