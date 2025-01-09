class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> v(n, vector<int>(n, 0));
        int val = 1;
        bool flag = true;
        int a=0, b=0, an=n-1, bn=n-1;

        while(a<=an && b <= bn)
        {
            for(int i=a; i<=an; i++) // l to r
                v[b][i] = val++;

            for(int i=b+1; i<=bn; i++) // down
                v[i][bn] = val++;
            
            if(b<bn && a<an)
            {
                for(int i=an-1; i>a; i--) // r to l
                    v[bn][i] = val++;

                for(int i=bn; i>b; i--) // up
                    v[i][a] = val++;
            }
            a++;
            an--;
            b++;
            bn--;
        }
        return v;
    }
};