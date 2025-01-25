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
        bool flag = false;
        int n, a, b;
        cin >> n >> a >> b;
        int N = n, A = a, B = b;
        while(a!=0 && n>0)
        {
            n = (n/2)+10;
            a--;
            if(n <= 0)
                flag  = true;
        }
        while(b!=0 && n>0)
        {
            n = n-10;
            b--;
            if(n <= 0)
                flag  = true;
        }
        while(B!=0 && N>0)
        {
            N = N-10;
            B--;
            if(N <= 0)
                flag  = true;
        }
        while(A!=0 && N>0)
        {
            N = (N/2)+10;
            A--;
            if(N <= 0)
                flag  = true;
        }
        if(flag)
            Y;
        else
            no;
    }
    return 0;
}