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
    int r, c;
    cin >> r >> c;
    c += 18;
    if(r>=c)
        cout << "RCB" << endll;
    else
        cout << "CSK" << endll;
    return 0;
}