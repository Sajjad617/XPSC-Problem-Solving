class Solution {
public:
    bool isPalindrome(int x) {
        // bool flag = true;
        vector<int> v;
        if(x==0)
            return true;
        else if(x < 0)
            return false;
        else 
        {
            int z = x; 
            while(z!=0)
            {
                int n = z%10;
                z = z/10;
                v.push_back(n);
            }
            int l = 0, r = v.size()-1;
            bool flag = false; 
            while(l <= r)
            {
                if(v[l] != v[r])
                {
                    return false;
                }
                l++;
                r--;
            }
            return true;
 
        }
       
    }
};