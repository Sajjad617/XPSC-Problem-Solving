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
    map<string, int> mp;
    while(t--)
    {
        string s;
        cin >> s;
        if(mp[s]==0)
            no;
        else
            Y;   

        mp[s] += 1; 

    }
    return 0;
}