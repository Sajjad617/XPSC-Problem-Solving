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
        deque<int> dq(n);
        for (int i = 0; i < n; i++)
        {
            cin >> dq[i];
            /* code */
        }
        sort(dq.begin(), dq.end());
        reverse(dq.begin(), dq.end());
        for (int i = 0; i < n; i++)
        {
            if(dq.size()==1)
                break;
            if(i%2==1)
                dq.pop_front();
            else
                dq.pop_back();

        }
        cout << dq[0] << endll;
        // for(auto x : dq)
        // {
        //     cout << x << " ";
        // }
        // nl;
        
    }
    return 0;
}