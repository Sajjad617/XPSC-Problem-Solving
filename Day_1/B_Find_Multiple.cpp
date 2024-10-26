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
    int a, b, c;
    cin >> a >> b >> c;
    int i = 1;
    int cal = c;
    while(!(cal>b))
    {
        cal = cal*i;
        if(a<=cal && b>=cal)
        {
            break;
        }
        i++;
    }
    if(b>=cal)
        cout << cal << endl;
    else
        cout << -1 << endll;

    return 0;
}