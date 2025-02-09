#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void fun()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(n==1)
    {
        if(v[0]%2)
            cout << 0 << endl;
        else
            cout << 1 << endl;

        return;
    }
    int odd  = 0;
    for(int i=0; i<n; i++)
    {
        if(v[i]%2)
            odd++;
    }
    if(odd==n)
        cout << n-1 << endl;
    else
        cout << odd+1 << endl;
        
    return;
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