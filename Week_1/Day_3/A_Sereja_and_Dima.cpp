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
    deque<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
    }
    int s=0, d=0;
    while(!v.empty())
    {
        if(v.front() > v.back())
        {
            s += v.front();
            v.pop_front();
        }
        else
        {
            s += v.back();
            v.pop_back();
        }
        if(v.empty())
            break;
        if(v.front() > v.back())
        {
            d += v.front();
            v.pop_front();
        }
        else
        {
            d += v.back();
            v.pop_back();
        }
    }

    cout << s << " " << d;

    return 0;
}