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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='B')
                cnt++;
            /* code */
        }
        if(cnt==k)
            cout << 0 << endl;
        else if(cnt > k)
        {
            cout << 1 << endl;
            int c = 0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='B')
                    c++;
                if(c==cnt-k)
                {
                    cout << i+1 << " A" << endl;
                    break;
                }
            }

        }
        else
        {
            cout << 1 << endl;
            int c=0;
            for(int i=0; i<n; i++)
            {
                
                if(s[i]=='A')
                    c++;

                if(c==k-cnt)
                {
                    cout << i+1 << " B" << endl;
                    break;
                }
            }
        }
        
    }
    return 0;
}