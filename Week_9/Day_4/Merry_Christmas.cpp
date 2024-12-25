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

        int n;
        cin >> n;
        if(n <= 2)
            cout << 1 << endll;
        else if(n < 7)
            cout << 2 << endll;
        else
            cout << 3 << endll;

    return 0;
}