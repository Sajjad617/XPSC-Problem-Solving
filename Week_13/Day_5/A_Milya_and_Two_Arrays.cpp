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
        vector<int> v1(n);
        vector<int> v2(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> v2[i];
        }

        set<int> tk;

        for (int i = 0; i < n; i++)
        {
            for(int j=0; j<n; j++)
            {
                tk.insert(v1[i]+v2[j]);
                if(tk.size() >= 3)
                    break;
                
            }
            if(tk.size() >= 3)
                break;
        }
        if(tk.size()>=3)
            Y;
        else
            no;


    }
    return 0;
}