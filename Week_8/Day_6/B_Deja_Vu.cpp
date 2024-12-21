#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> v1(n1), v2(n2);
        for (int i = 0; i < n1; i++)
        {
            cin >> v1[i];
        }

        for (int i = 0; i < n2; i++)
        {
            cin >> v2[i];
        }
        for (int i = 0; i < n2; i++)
        {
            int x = pow(2, v2[i]);
            for (int j = 0; j < n1; j++)
            {
                // cout << v2[i] << "<>" << v1[j] << endll;
                // if(v1[j] >= x && x%v1[j]==0)
                // {
                    // int z = pow(2, (v2[i]-1));
                    // v1[j] += z;
                    // c
                    // cout << v1[j] << "<>" << v2[i] << endl;;
                // }
                    // cout << x << "<>" << x%v1[j] << "<>" << v1[j] << endl;;
                /* code */
            }
        }
        // for(auto x : v2)
        //     cout << x << " ";
        
        cout << endll;
    }
    return 0;
}