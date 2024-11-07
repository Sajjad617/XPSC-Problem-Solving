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
    int cstmr = 1;
    set<pair<int, int>> spr;
    multiset<pair<int, int>> ml;
    vector<int> v;
    while(t--)
    {
        int q;
        cin >> q;
        if(q==1)
        {
            int money;
            cin >> money;
            spr.insert({cstmr, money});
            ml.insert({money, -cstmr});
            cstmr++;
        }
        else if(q==2)
        {
            int pos = spr.begin()->first;
            int tk = spr.begin()->second;
            v.push_back(pos);
            spr.erase(spr.begin());
            ml.erase({tk, pos});

        }
        else
        {
            int pos = -ml.rbegin()->second;
            int tk = ml.rbegin()->first;
            v.push_back(pos);
            ml.erase(--ml.end());
            spr.erase({pos, tk});
        }
    }

    for(auto x : v)
        cout << x << " ";
    
    cout << endll;
    return 0;
}