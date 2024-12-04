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
    int a, b ,c;
    cin >> a >> b >> c;
    int cal = b+c;
    if(cal>=a)
        Y;
    else
        no;
    return 0;
}