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
    string s1;
    cin >> s1;
    int qrt = sqrt(n);
    int total = qrt*qrt;
    int cnt= 0;
    for (int i = 0; i < s1.size(); i++)
    {
        if(s1[i]=='1')
            cnt++;
        else
            break;
    }
    if(cnt==n)
    {
        if(n==4)
            Y;
        else
            no;
        // cout << "++" << endl;
        return;
    }
    else
    {
        cnt--;

        if(cnt*cnt==n)
            Y;
        else
            no;
            
    }
    return;
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