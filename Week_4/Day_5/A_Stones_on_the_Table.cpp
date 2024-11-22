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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int total = 0;
    for (int i = 1; i < n; i++)
    {
        if(s[i]==s[i-1])
            total++;
        /* code */
    }
    cout << total << endll;
    
    return 0;
}