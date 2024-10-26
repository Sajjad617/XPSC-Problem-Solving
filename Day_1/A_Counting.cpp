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
    int cal = b-a+1;
    if(cal>0) 
        cout << cal << endll;
    else
        cout << 0 << endll;
    return 0;
}