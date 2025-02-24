#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endll '\n'
#define Y cout << "YES" << endll
#define no cout << "NO" << endll
#define nl cout << endll
void game()
{
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s2.begin(), s2.end());
    if(s1.size() != s2.size())
    {
        no;
        return;
    }
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i] != s2[i])
        {
            no;
            return;
        }

    }
    Y;
    return;


}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    game();
    return 0;
}