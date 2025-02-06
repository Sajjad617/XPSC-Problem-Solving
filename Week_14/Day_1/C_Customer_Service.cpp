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
        int matrix[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        if(n==1)
            cout << 1 << endl;
        else
        {
            multiset<int> st;
            for(int i=0; i<n; i++)
            {
                int cnt = 0;
                for(int j=n-1; j >= 0; j--)
                {
                    if(matrix[i][j] == 1)
                        cnt++;
                    else
                        break;
                }
                if(cnt)
                    st.insert(cnt);
            }
            if(st.size()==0)
                cout << 1 << endl;
            else
            {
                int mx = 1;
                for(auto x : st)
                {
                    if(x >=mx)
                        mx++;
                }
                
                cout << st.size() << endl;
                cout << min(mx, n) << endl;
            }

        }
    }
    return 0;
}