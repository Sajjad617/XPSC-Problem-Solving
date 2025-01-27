class Solution {
public:
    bool isBalanced(string num) {
        int total1 = 0;
        int total2 = 0;
        int n = num.size();
        for(int i=0; i<n; i++)
        {
            int x = num[i]-'0';
            if(i%2==0)
                total1 += x;
            else
                total2 += x;
        }
        if(total1 == total2)
            return true;
        else
            return false;
    }
};