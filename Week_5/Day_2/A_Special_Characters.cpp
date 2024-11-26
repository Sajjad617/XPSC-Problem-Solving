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
        if(n%2==1)
            no;
        else
        {
            Y;
            for(int i=0; i<n/2; i++)
            {
                if(i%2==0)
                    cout << "AA";
                else
                    cout << "BB";
            }
            cout << endll;
        }
    }
    return 0;
}