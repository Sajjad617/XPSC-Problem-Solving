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
    int n, m;
    cin >> n >> m;
    n = (n+1)/2;
    if(n<=m)
        cout << "NEWBIE" << endll;
    else
        cout << "PRO" << endll;

    return 0;
}