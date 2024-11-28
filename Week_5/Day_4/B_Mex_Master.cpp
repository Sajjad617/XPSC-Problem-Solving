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
        int z = 0;
        vector<int> v(n);
        bool flag = false;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if(v[i]==0)
                z++;
            else if (v[i]>=2)
            {
                flag = true;
            }
        }
        if(z <= (n+1)/2)
            cout << 0 << endll;
        else if (flag || z == n)
            cout << 1 << endll;
        else
            cout << 2 << endll; 

        

        
    }
    return 0;
}