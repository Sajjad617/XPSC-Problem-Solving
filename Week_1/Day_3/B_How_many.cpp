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
    int n, t;
    cin >> n >> t;
    int cnt = 0;
    int cnt1 = 0;
    for(int i=0; i<=100; i++)
    {
        for(int j=0; j<=100; j++)
        {
            for(int k=0; k<=100; k++)
            {
                if((i*j*k)<=t && i+j+k<=n)
                    cnt++;

            }
        }
    }
    cout << cnt << endll;
    return 0;
}