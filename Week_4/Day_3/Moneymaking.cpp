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
    if(a!=0 && b!=0)
        cout << (a*5000)+(b*9800);
    else
    {
        if(a==0)
            cout << b*9800;
        else if(b==0)
            cout << a*5000;
        else
            cout << 0 << endll;
    }
    return 0;
}