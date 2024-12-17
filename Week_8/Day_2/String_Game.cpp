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
        if(s.size()==1)
            cout << "Ramos" << endll;
        else
        {
            bool flag = true;
            for (int i = 0; i < n; i++)
            {
                if(s[i]=='0')
                    flag = false;
            }
            if(flag)
                cout << "Ramos" << endll;
            else
                cout << "Zlatan" << endll;


        }
        
    }
    return 0;
}