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
    string str;
    int len,i,k;
    cin >> str;
    len = str.size();
    k = 0;

    for (i=0; i<len-1; i++)
    {
        if (str[i] == str[i+1])
        {
            ++k;
            str.erase(i,2);
            len = str.size();
            i = -1;
        }
    }

    if (k & 1)
        Y;
    else
        no;
    
    return 0;
}