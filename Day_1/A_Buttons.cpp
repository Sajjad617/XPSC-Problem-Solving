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
    int a, b;
    cin >> a >> b;

    if(a==b)
        cout << a+b << endll;
    else
    {
        int mx = max(a, b);
        int cp = mx-1;
        cout << mx+cp << endll;
    }
    return 0;
}