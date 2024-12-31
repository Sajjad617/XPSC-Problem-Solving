#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll

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
        vector<int> v(n);
        vector<bool> vt(n, false);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i]--;
        }
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < n; i++)
        {
            if(!vt[i])
            {
                int sz = 0;
                int j = i;
                while(!vt[j])
                {
                    vt[j] = true;
                    sz++;
                    j = v[j];
                }
                pq.push(sz);
            }
        }
        int cal = 0;
        while(pq.size() > 1)
        {
            int mx = pq.top();
            pq.pop();
            int mx1 = pq.top();
            pq.pop();
            cal += mx+mx1;
            pq.push(mx+mx1);
        }
        cout << cal << endll;
        

        
    }
    return 0;
}