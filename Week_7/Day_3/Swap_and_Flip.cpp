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
        string v1;
        string v2;
        cin >> v1 >> v2;

        int c1 = 0; 
        int c2 = 0;

        for (int i = 0; i < n; i++)
        {
            if(v1[i]=='1')
                c1++;

            if(v2[i]=='1')
                c2++;
        }
        c1 = c1%2;
        c2 = c2%2;
        // cout << c1 << "<>" << c2 << endll;
        if(c1==c2)
            Y;
        else
            no;
        

    }
    return 0;
}