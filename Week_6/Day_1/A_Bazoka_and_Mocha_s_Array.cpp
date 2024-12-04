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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
        }
        
        int cnt = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] < v[i - 1])
                cnt++;
        }
        if (cnt == 0 || (cnt == 1 && v.back() <= v.front()))
            Y;
        else
            no;
        }
    return 0;
}