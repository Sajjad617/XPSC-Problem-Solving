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
    ll total = 0, l = 0, r = 0;
    while (l < a && r < b)
    {
        int curr = v1[l], cnt1=0, cnt2=0;
        while(l<a && v1[l] == curr)
            cnt1++, l++;
        while(r<b && curr > v2[r])
            r++;
        while(r<b && v2[r]==curr)
            cnt2++, r++;
        
        total +=(1LL* cnt1*cnt2);
    }
    cout << total << endll;
    
    
    
    return 0;
}