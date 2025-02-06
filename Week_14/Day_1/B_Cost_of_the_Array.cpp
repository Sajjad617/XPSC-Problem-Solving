#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void fun()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        /* code */
    }
    bool flag = true;
    if(n==k)
    {
        vector<int> nv;
        for (int j = 1; j < n; j +=2)
        {
            nv.push_back(v[j]);
        }
        int cnt = 1;
        for(auto x : nv)
        {
            if(x != cnt)
            {
                cout << cnt << endl;
                return;
            }
            else
            {
                cnt++;
            }
        }
        cout << cnt << endl;
        
    }
    else
    {
        for(int i=1; i< n - (k - 2); i++)
        {
            if(v[i] != 1)
            {
                cout << 1 << endl;
                return;
            }
        }
        cout << 2 << endl;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        fun();
    }
    return 0;
}