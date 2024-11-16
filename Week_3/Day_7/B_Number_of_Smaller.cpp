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
    int a, b;
    cin >> a >> b;
    vector<int> v1(a);
    vector<int> v2(b);
    for (int i = 0; i < a; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> v2[i];
    }
    int cnt = 0, u = 0, d = 0;
    vector<int> ans;
    while (d < b)
    {
        if(u < a && v1[u] < v2[d])
        {
            u++;
            cnt++;
        }
        else
        {
            ans.push_back(cnt);
            d++;
        }
        
    }
    for(auto x : ans)
        cout << x << " ";
    
    
    
    return 0;
}