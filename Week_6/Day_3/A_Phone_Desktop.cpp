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
    int t;
    cin >> t;
    while(t--)
    {
        int x, y;
        cin >> x >> y;
        int final = (y+1)/2;
        x -= ((y/2)*7) + ((y%2)*11);
        if(x > 0)
        {
            if(x%15==0)
                final += (x/15);
            else
                final += (x/15)+1;
        }
        
        cout << final << endll;
        
    }
    return 0;
}