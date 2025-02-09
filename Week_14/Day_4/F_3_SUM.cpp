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
    vector<int> v(10);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        x = x%10;
        v[x]++;
        /* code */
    }

    vector<int> res;
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<min(3, v[i]); j++)
        {
            res.push_back(i);
        }
    }
    int sz = res.size();
    for(int i=0; i<sz; i++)
    {
        for(int j=i+1; j<sz; j++)
        {
            for(int k=j+1; k<sz; k++)
            {
                int total = res[i]+res[j]+res[k];
                if(total%10==3)
                {
                    Y;
                    return;
                }
            }
        }
    }
    no;
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