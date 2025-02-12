#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
bool check(char x)
{
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' )
        return true;
    return false;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;

    if(s1.size()==s2.size())
    {
        bool flag = true;
        for(int i=0; i<s1.size(); i++)
        {
            if(check(s1[i]) && !check(s2[i]))
                flag = false;
            else if(!check(s1[i]) && check(s2[i]))
                flag = false;
        }
        if(flag)
            Y;
        else
            no;

    }
    else
        no;
    
    return 0;
}