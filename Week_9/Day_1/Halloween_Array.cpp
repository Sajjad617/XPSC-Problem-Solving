#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define M 1000000007
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
void fun ()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v(n);
    set<int> st;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        st.insert(v[i]);
        /* code */
    }

    if(st.size() < n)
    {
        if(l == 0)
        {
            Y;
            return;
        }
        no;
        return;
    }
 
    int mul = 1;
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            mul *= (v[i] ^ v[j]);
            if(mul > r)
            {
                no;
                return;
            }
        }
    }
    if(mul >= l && mul <=r)
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
        fun();        
    }
    return 0;
}