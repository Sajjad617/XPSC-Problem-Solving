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
        string st;
        cin >> st;
        stack<int> up, lo;
        for(int i=0; i<st.size(); i++)
        {
            if(st[i]>='A' && st[i]<='Z' && st[i] != 'B')
                up.push(i);
            if(st[i]>='a' && st[i]<='z' && st[i] != 'b')
                lo.push(i);
            
            if(st[i]=='B' && !up.empty())
            {
                st[up.top()] = '1';
                up.pop();
            }
            if(st[i]=='b' && !lo.empty())
            {
                st[lo.top()] = '1';
                lo.pop();
            }
        }
        for(int i=0; i<st.size(); i++)
        {
            if(st[i]!='B' && st[i]!='b' && st[i]!='1')
                cout << st[i];
            
        }
        cout << endll;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define M 1000000007
// #define endll '\n'
// #define Y cout << "YES" << endll
// #define no cout << "NO" << endll

// ll main()
// {
//     ios::sync_with_stdio(0);
//     cin.tie(NULL);
//     ll t;
//     cin >> t;
//     while(t--)
//     {
        
//         string s;
//         cin >> s;
//         // string final;
//         bool bflag = false;
//         bool Bflag = false;
//         stack<char> final;
//         stack<char> cc;
//         for(ll i=0; i<s.size(); i++)
//         {
//             if(s[i]=='b')
//             {
//                 bflag = true;
//                 if(!final.empty())
//                 {
//                     while(!final.empty())
//                     {
//                         char x = final.top();
//                         final.pop();
//                         if(bflag && x>='a' && x<='z')
//                         {
//                             bflag = false;
//                         }
//                         else
//                             cc.push(x);
//                     }
//                     while(!cc.empty())
//                     {
//                         char x = cc.top();
//                         cc.pop();
                        
//                         final.push(x);
//                     }
//                 }
//             }
//             else if(s[i]=='B')
//             {
//                 bflag = true;
//                 if(!final.empty())
//                 {
//                     while(!final.empty())
//                     {
//                         char x = final.top();
//                         final.pop();
//                         if(bflag && x>='A' && x<='Z')
//                         {
//                             bflag = false;
//                         }
//                         else
//                             cc.push(x);
//                     }
//                     while(!cc.empty())
//                     {
//                         char x = cc.top();
//                         cc.pop();
                        
//                         final.push(x);
//                     }
//                 }

//             }
//             else
//                 final.push(s[i]);

//         }
//         while(!final.empty())
//         {
//             char x = final.top();
//             final.pop();
//             // cout << x;
//             cc.push(x);
//         }
//         while(!cc.empty())
//         {
//             char x = cc.top();
//             cc.pop();
//             cout << x;
//             final.push(x);
//         }
//         cout << endll;

//     }
//     return 0;
// }