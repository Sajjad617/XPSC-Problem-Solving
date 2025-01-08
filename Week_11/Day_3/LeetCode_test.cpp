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
    string s;
    cin >> s;
    string s1 = "ddd";
    cout << s.length() << endl;
    cout << s.size() << endl;
    cout << s.find(s1) << endl;
    cout << s.rfind(s1) << endl;
    cout << s.length() << "<>" << s1.length() << endl;

    // int n;
    // cin >> n;
    // cout << 1%3;
    // vector<int> v = {1,8,6,2,5,4,8,3,7};
    // vector<int> v = {8,7,2,1};
    // cout << maxArea(v);
    // map<int, string> mp;
    // mp[180] = "Mary";
    // mp[165] = "John";
    // mp[170] = "Emma";
    // mp[155] = "Alice";
    // mp[185] = "Bob";
    // cout << numberToWords(n);
    // char f;
    // cin >> f;
    // vector<string> v = {"abc","bcd","aabaa","cbc","leet","code"};
    // // cout << v.size() ;
    // for(auto x : mp)
    // {
    //     cout << x.first << "<>" << x.second << endll;
    // }
        
    // int n, k;
    // cin >> n >> k;
    // vector<int> nums(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> nums[i];
    // }
    // twoSum(nums, k);
    // for(auto x : v)
    //     cout << x << " ";
    return 0;
}