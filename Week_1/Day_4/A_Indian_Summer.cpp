// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define M 1000000007
// #define endll '\n'
// #define Y cout << "YES" << endll
// #define no cout << "NO" << endll

// int main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
    
//     int n;
//     cin >> n;
//     vector<pair<string, string>> v(n);
//     for (int i = 0; i < n; i++)
//     {
//         string s1;
//         string s2;
//         cin >> s1 >> s2;
//         // if(s1.size()<=10)
//         v[i] = make_pair(s1, s2);
//     }
//     // cout << v.size();
//     vector<pair<string, string>> z;
//     // z.push_back(make_pair(v[0].first, v[0].second));
//     z.push_back(v[0]);
//     for (int i = 1; i < n; i++)
//     {
//         string s1 = v[i].first;
//         string s2 = v[i].second;
//         bool flag = false;
//         for(int i=0; i<z.size(); i++)
//         {
//             if(s1==z[i].first && s2==z[i].second)
//             {
//                 flag = true;
//             }
//         }

//         if(!flag)
//         {
//             z.push_back(v[i]);
//         }
//     }

//     cout << z.size() << endll;
    
//     return 0;
// }

// OR

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
    
    int n;
    cin >> n;
    map<pair<string, string>, bool> mp;
    for (int i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        mp[{a, b}] = true;
    }

    // for(auto x : mp)
    // {
    //     // pair<string, string> p = x.first;
    //     // cout << p.first << " " << p.second << endll;
    //     // or
    //     cout << x.first.first << " " << p.first.second << endll;
    // }
    
    cout << mp.size() << endll;
    return 0;
}