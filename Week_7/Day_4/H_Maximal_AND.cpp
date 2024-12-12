#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
const int B = 30;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            /* code */
        }
        vector<int> bitt(B+1);
        for (int i = 0; i < n; i++)
        {
            for (int k = B; k >= 0; k--)
            {
                if((v[i] >> k) & 1)
                    bitt[k]++;
            }
        }

        int cal = 0;
        for (int k = B; k >= 0; k--)
        {
            if(bitt[k]==n)
                cal += (1LL << k);
            else
            {
                int need = n - bitt[k];
                if(m >= need)
                {
                    cal += (1LL << k);
                    m -= need;
                }
            }
        }
        cout << cal << endll;
        
    }
    return 0;
}