public class Solution {
    public bool AreAlmostEqual(string s1, string s2) {
        int n = s1.length;
        int m = s2.size();
        if(n!=m)
            return false;
        bool flag = true;
        char c1, c2;
        int cnt = 0;
        for(int i=0; i<n; i++)
        {
            if(flag)
            {
                if(s1[i]!=s2[i])
                {
                    c1 = s1[i];
                    c2 = s2[i];
                    flag = false;
                    cnt++;
                }
            }
            else
            {
                if(s1[i]!=s2[i])
                {
                    if(s1[i]==c2 && s2[i]==c1)
                        flag = true;
                }
            }
            if(cnt==2)
                return false;
        }
        if(flag)
            return true;
        return false;
    }
}