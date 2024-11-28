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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            v[i] = i+1;
        }
        int z = n-k-1;
        reverse(v.begin(), v.end());
        sort(v.begin()+z, v.end());
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " "; 
            /* code */
        }
        cout << endll;
        

        
    }
    return 0;
}