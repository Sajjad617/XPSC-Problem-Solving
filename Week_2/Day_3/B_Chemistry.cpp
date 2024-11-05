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
        int a, b;
        cin >> a >> b;
        string s;
        cin >> s;
        int arr[26];
        memset(arr, 0, sizeof(arr));
        // cout << arr[5];
        for(int i=0; i<a; i++)
        {
            int x = s[i]-'a';
            arr[x]++;
        }
        int even = 0;
        int odd = 0;

        for(int i=0; i<26; i++)
        {
            if(arr[i]!=0)
            {
                if(arr[i]%2==0)
                    even++;
                else
                    odd++;
            }
        }
        odd = odd-b;

        if(odd<2)
            Y;
        else
            no;
        
    }
    return 0;
}