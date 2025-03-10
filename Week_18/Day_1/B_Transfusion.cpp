#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void sajjad()
{
    int n;
    cin >> n;
    ll sum_o = 0;
    ll sum_e = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (i & 1)
            sum_o += x;
        else
            sum_e += x;
    }
    int e = n / 2;
    int o = n / 2;
    if(n & 1)
        e++;
    if ((sum_e % e) != 0 || (sum_o % o) != 0 || sum_o/o != sum_e/e)
    {
        no;
        return;
    }
        
    Y;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        sajjad();
    }
    return 0;
}