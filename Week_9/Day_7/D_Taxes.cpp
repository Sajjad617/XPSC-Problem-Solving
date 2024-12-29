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
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0)
            flag = false;
        /* code */
    }
    if(flag)
        cout << 1 << endll;
    else if(n%2==0)
        cout << 2 << endll;
    else
    {
        int cal = n-2;
        for (int i = 2; i <= sqrt(cal); i++)
        {   if(cal%i==0)
                flag = true;
        }
        if(flag)
            cout << 3 << endll;
        else
            cout << 2 << endll;
        
    }
    
    return 0;
}