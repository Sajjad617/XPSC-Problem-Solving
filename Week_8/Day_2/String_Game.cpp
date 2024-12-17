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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int one = 0, zero = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0')
                zero++;
            else
                one++;
        }
        if(min(zero, one)%2)
            cout << "Zlatan" << endll;
        else
            cout << "Ramos" << endll;

    }
    return 0;
}