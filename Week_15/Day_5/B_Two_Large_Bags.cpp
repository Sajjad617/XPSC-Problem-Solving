#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    set<int> st;
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        st.insert(v[i]);
    }
    while(!st.empty())
    {
        int mn = *st.begin();
        if(mp[mn]==1)
        {
            no;
            return;
        }
        mp[mn+1] += mp[mn]-2;
        st.erase(mn);
        if(mp[mn+1])
            st.insert(mn+1);
        
        mp[mn]=0;

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
        game();
    }
    return 0;
}