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
    pair<string, string> mp1[a];
    for (int i = 0; i < a; i++)
    {
        cin >> mp1[i].first >> mp1[i].second;
    }
    pair<string, string> mp2[b];
    for (int i = 0; i < b; i++)
    {
        cin >> mp2[i].first >> mp2[i].second;
    }
    for (int i = 0; i < b; i++)
    {
        string s1 = mp2[i].second;
        for (int j = 0; j < a; j++)
        {
            string s2 = mp1[j].second;
            if(s1[s1.size()-2] == s2[s2.size()-1] && s1[s1.size()-3] == s2[s2.size()-2])
                cout << mp2[i].first << " " << mp2[i].second << " #" << mp1[j].first << endll;
        }
    
    }


    // string z = mp1[1].first;
    // cout << z[] << endll;
    return 0;
}