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
        vector<int> v1(n), v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }
        
        int dif = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            if(v2[i]!=0)
                dif = min(dif, (v1[i] - v2[i]));
        }
        if(dif < 0)
            no;
        else
            {
                bool flag = true;
                for (int i = 0; i < n; i++)
                {
                    if(v1[i]-v2[i] > dif)
                    {
                        flag = false;
                        break;
                    }
                    // if(v2[i] && v1[i]-v2[i] < dif)
                    // {
                    //     flag = false;
                    //     break;
                    // }
                }
                if(flag)
                    Y;
                else
                    no;
            }

        
    }
    return 0;
}