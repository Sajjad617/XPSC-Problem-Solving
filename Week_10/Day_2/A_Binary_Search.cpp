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
    int n, k;
    cin >> n >> k;
    vector<int> v1(n);
    vector<int> v2(k);
    for(int i = 0; i<n; i++)
    {
        cin >> v1[i];
    }
    for(int i = 0; i<k; i++)
    {
        cin >> v2[i];
    }

    for(int i = 0; i<k; i++)
    {
        // cout << v2[i] << " ";
        int x = v2[i];
        int l = 0, r = n-1;
        int mid;
        bool flag = false;
        while(l <= r)
        {
            mid = (l+r)/2;
            if(v1[mid]==x)
            {
                flag = true;
                break;
            }
            else if(v1[mid] < x)
            {
                l = mid+1;
            }
            else
            {
                r = mid-1;
            }
            
        }

        if(flag)
            Y;
        else
            no;
    }

    return 0;
}