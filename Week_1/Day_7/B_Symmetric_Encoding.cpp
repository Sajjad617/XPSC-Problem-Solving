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
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        set<char> st;
        for(int i=0; i<n; i++)
        {
            st.insert(s[i]);
        }
        // for(auto it=st.begin(); it!=st.end(); it++)
        // {
        //     cout << *it << " ";
        // }
        map<char, char> mp;
        auto last = st.rbegin();
        for(auto it=st.begin(); it!=st.end(); it++)
        {
            mp[*it] = *last;
            last++; 
        }

        for(int i=0; i<n; i++)
        {
            cout << mp[s[i]];
        }
        cout << endll;

    }
    return 0;
}