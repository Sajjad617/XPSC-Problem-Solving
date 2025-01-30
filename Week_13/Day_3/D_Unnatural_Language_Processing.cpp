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
    while(t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        vector<bool> v(n+10, false);
        for (int i = n-1; i >= 0; i--)
        {
            if(str[i] == 'a' || str[i]=='e'){
                i--;
                v[i] = true;
            }
            else
            {
                i -= 2;
                v[i] = true;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if(i != 0 && v[i])
                cout << '.';
            
            cout << str[i];
            /* code */
        }
        nl;
    }
    return 0;
}