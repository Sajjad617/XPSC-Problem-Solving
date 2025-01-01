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
        string s;
        cin >> s;
        int zero = 0, one = 0;
        for (int i = 0; i < s.size(); i++)
        {   
            if(s[i]=='0')
                zero++;
            else
                one++;
        }

        if(abs(zero-one) > 1)
            no;
        else
        {
            int z=0, on = 0;
            for (int i = 0; i < s.size()-1; i++)
            {
                if(s[i]==s[i+1] && s[i]=='0')
                    z++;
                else if(s[i]==s[i+1] && s[i]=='1')
                    on++;
                
                if(on > 1 || z > 1)
                    break;
            }
            if(on > 1 || z > 1)
                no;
            else
                Y;
            
        }
        
    }
    return 0;
}