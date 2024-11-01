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
    map<string, string> mp1;
    for (int i = 0; i < a; i++)
    {
        string name, ip;
        cin >> name >> ip;
        mp1[ip] = name;
    }
    for (int i = 0; i < b; i++)
    {
        string name, ip;
        cin >> name >> ip;
        // mp1[ip] = name;
        ip.pop_back();
        cout << name << " " << ip << "; #" << mp1[ip] << endll;
    }
    

    return 0;
}