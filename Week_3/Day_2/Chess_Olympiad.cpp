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
    int a, b, c;
    cin >> a >> b >> c;
    if(c==2 || b==4 || b>=2 && c==1)
        no;
    else
        Y;
    return 0;
}