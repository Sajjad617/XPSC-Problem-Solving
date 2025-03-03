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
        int n, k;
        cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        int total_gold = 0;
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i]>=k)
            {
                total_gold += arr[i];
            }
            else if(arr[i]==0)
            {
                if(total_gold != 0)
                {
                    cnt++;
                    total_gold--;
                }
            }
        }
        cout << cnt << endl;

    }
    return 0;
}