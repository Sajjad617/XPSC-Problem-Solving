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
        long long n;
        cin >> n;
        deque<long long> ans;
        for (int k = 0;k <= __lg(n);k++) {
            if ((n >> k) & 1) {
                long long value = n - (1LL << k);
                if (value > 0) {
                ans.push_front(value);
                }
            }
        }

        ans.push_back(n);
        cout << ans.size() << endll;
        for (auto value : ans) {
            cout << value << " ";
        }
        cout << endll;
    }
    return 0;
}