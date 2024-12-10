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
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool flag = false;
    for (int m = 0; m < (1 << n); m++)
    {
        int cal = 0;
        for(int j=0; j<n; j++)
        {
            if((m >> j) & 1)
                cal += v[j];
            else
                cal -= v[j];
        }
        // cout << cal << endll;
        if(cal%360==0)
            flag = true;
    }
    if(flag)
        Y;
    else
        no;
    
    
    return 0;
}