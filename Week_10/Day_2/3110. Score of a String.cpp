#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
int maxScore(string s) 
{
        int total = 0;
        for(int i=0; i<s.size()-1; i++)
        {
            total += abs(s[i]-s[i+1]);
        }
        return total;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    cin >> s;
    cout << maxScore(s) << endll;
    return 0;
}