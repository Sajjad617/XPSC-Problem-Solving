#include<bits/stdc++.h>
using namespace std;
#define ll long long int
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
        int a, b, n;
        cin >> a >> b >> n;
        int dif = INT_MAX;
        for (int i = 1; i <= a; i++)
        {
            for (int j = 1; j <= b; j++)
            {
                int x = 2*(i+j);
                int cal = abs(x-n);

                if(dif > cal)
                    dif = cal;
            }
            
            /* code */
        }
        cout << dif << endll;
    }
    return 0;
}