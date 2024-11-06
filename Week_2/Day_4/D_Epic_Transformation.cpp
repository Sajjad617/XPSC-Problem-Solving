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
        int n;
        cin >> n;
        map<int, int> mp;
        for(int i=0; i<n; i++)
        {
            int x;
            cin >> x;
            mp[x]++;
        }
        priority_queue<int> pq;
        for(auto [v, c] : mp)
        {
            pq.push(c);
        }
        while(!pq.empty())
        {
            if(pq.size() < 2)
                break;

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            x--;
            y--;

            if(x >= 1)
                pq.push(x);
            if(y >= 1)
                pq.push(y);
        }
        int cnt = 0;

        while(!pq.empty())
        {
            cnt += pq.top();
            pq.pop();
        }
        cout << cnt << endll;
    }
    return 0;
}