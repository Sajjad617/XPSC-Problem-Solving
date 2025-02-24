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
    while(true)
    {
        t++;
        int a = t/1000;
        int b = (t/100)%10;
        int c = (t/10)%10;
        int d = t%10;
        if(a!=b && a!=c && a!=d && b!=c && b!=d & c!=d)
            break;
    }
    cout << t << endl;
    return 0;
}