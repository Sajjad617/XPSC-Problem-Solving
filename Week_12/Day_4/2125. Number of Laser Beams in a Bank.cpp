class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total = 0;
        int cnt = 0, cal = 0;
        for(auto x : bank)
        {
            bool flag = false;
            cnt = 0;
            for(int i=0; i<x.size(); i++)
            {
                if(x[i]=='1')
                {
                    cnt++;
                    flag = true;
                }
            }
            if(flag)
            {
                total += cnt*cal;
                cal = cnt; 
            }
            
        }
        return total;
    }
};