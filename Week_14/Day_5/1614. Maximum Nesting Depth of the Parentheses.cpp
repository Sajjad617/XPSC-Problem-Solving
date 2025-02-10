class Solution {
    public:
        int maxDepth(string s) {
            int n = s.size();
            stack<char> st;
            int mx = 0;
            int cnt = 0;
            for(int i=0; i<n; i++)
            {
                if(s[i]=='(')
                {
                    st.push(s[i]);
                    cnt++;
                    mx = max(mx, cnt);
                }
                else if(s[i]==')')
                {
                    st.pop();
                    cnt--;
                }
                
    
            }
            return mx;
        }
    };