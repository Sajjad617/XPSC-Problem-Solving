#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<int> v(t);
    bool flag = true;
    for (int i = 0; i < t; i++)
    {
        cin >> v[i];

        if(v[i]==1)
            flag = false;
    }

    if(flag)
        cout << "EASY" << endl;
    else
        cout << "HARD" << endl;
    return 0;
}