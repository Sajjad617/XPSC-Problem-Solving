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
        ll n, k, p;
        cin >> n >> k >> p;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
        }
        int cal = 0;
        sort(v.begin(), v.end());

        for (int i = 0; i < n-1; i++)
        {
            cal += v[i];
        }
        // cout << cal << endll;
        k += v.back();
        p += cal;
        if(k==p)
            cout << "Equal" << endll;
        else if(k<p)
            cout << "Varun" << endll;
        else
            cout << "Ved" << endll;

    }
    return 0;
}