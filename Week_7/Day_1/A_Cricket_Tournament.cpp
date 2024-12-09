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
        int team, m;
        cin >> team >> m;
        int total = 0;
        while(team > 0)
        {
            if(team==1)
                break;
            total += team/2;
            if(team%2==0)
                team = team/2;
            else{
                team = team/2;
                team++;
            }
            
        }
        if(total>=m)
            Y;
        else
            no;
    }
    return 0;
}