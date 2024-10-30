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
        deque<char> dq(n);
        for (int i = 0; i <n ; i++)
        {
            cin >> dq[i];
        }
        while (true)
        {
            if(dq.empty())
                break;
            else if(dq.front()=='B' && dq.back()=='B')
                break;
            if(dq.front()=='W')
                dq.pop_front();

            if(dq.back()=='W')
                dq.pop_back();
        }
        cout << dq.size() << endll;
    }

    return 0;
}