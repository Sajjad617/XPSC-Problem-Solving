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
    
    int n;
    cin >> n;
    if(n==0)
        cout << "0000" << endll;
    else if(n>=1 && n<=9)
        cout << "000" << n << endll;
    else if(n>=10 && n<=99)
        cout << "00" << n << endll;
    else if(n>=100 && n<=999)
        cout << "0" << n << endll;
    else
        cout << n << endll;

    return 0;
}