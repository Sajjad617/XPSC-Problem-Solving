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
    vector<int> v(a+1);
    vector<int> final(a+1);
    for (int i = 1; i <=a; i++)
    {
        cin >> v[i];
    }
    set<int> st;
    for (int i = a; i >= 1; i--)
    {
        st.insert(v[i]);
        final[i] = st.size();
    }
    for (int i = 1; i <= b; i++)
    {
        int po;
        cin >> po;
        cout << final[po] << endll;
    }

    
    return 0;
}