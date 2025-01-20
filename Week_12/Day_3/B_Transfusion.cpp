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
    int sum_o = 0;
    int sum_e = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (i & 1)
            sum_o += x;
        else
            sum_e += x;
    }
    int e = n / 2;
    int o = n - (n / 2);
    if ((sum_e % e) != 0 || (sum_o % o) != 0)
    {
        no;
        return;
    }
    if ((sum_e / e) == (sum_o / o))
        Y;
    else
        no;
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