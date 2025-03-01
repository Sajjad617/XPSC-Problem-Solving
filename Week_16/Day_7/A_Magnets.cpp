#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    int t;
    cin >> t;
    int cnt = 0;
    vector<int> v;
    while(t--)
    {
        int n;
        cin >> n;
        if(v.empty())
        {
            cnt++;
            v.push_back(n);
        }
        else
        {
            if(v.back()!=n)
            {
                cnt++;
                v.push_back(n);
            }
        }
        
    }
    cout << cnt << endl;
    return 0;
}