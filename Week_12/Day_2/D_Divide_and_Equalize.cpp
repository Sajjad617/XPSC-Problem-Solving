#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
// map<int, int> mp;
// void fun(int n)
// {
//     for (int i = 2; i*i <= n; i++)
//     {
//         while(n%i==0)
//         {
//             n = n/i;
//             mp[i]++;
//         }
//     }
//     if(n>1)
//         mp[n]++;
    
// }
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
        map<int, int> mp;
        vector<int> v(n+1);

		for(int i=1;i<=n;i++){
			cin >> v[i];
			for(int j=2; j*j<=v[i]; j++)
            {
				while(v[i]%j==0)
                {
					v[i]/=j;
					mp[j]++;
				}
			}
			if(v[i]>1) 
                mp[v[i]]++;
		}

        bool flag = true;
        for(auto x : mp)
        {
            if(x.second % n != 0)
            {
                flag = false;
                // break;
            }
        }
        if(flag)
            Y;
        else
            no;
        
    }
    return 0;
}