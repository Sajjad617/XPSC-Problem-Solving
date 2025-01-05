class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        int n = s.size();
        bool vxi = false;
        bool clx = false;
        bool mdc = false;
        reverse(s.begin(), s.end());
        for(int i=0; i<n; i++)
        {
            if(s[i]=='I')
            {   
                if(!vxi){
                    total++;
                }
                else 
                {
                    total--;
                }
                vxi = false;
            }
            else if(s[i]=='V')
            {
                vxi = true;
                total += 5;
            }
            else if(s[i]=='X')
            {
                if(clx)
                    total -= 10;
                else
                {
                    vxi=true;
                    total += 10;
                }
                clx = false;
            }
            else if(s[i]=='L')
            {
                clx=true;
                total += 50;
            }
            else if(s[i]=='C')
            {
                if(mdc)
                    total -= 100;
                else
                {
                    total += 100;
                    clx=true;
                }
                mdc = false;
            }
            else if(s[i]=='D')
            {
                mdc = true;
                total += 500;
            }
            else if(s[i]=='M')
            {
                mdc = true;
                total += 1000;
            }
        }
        return total;
    }
};