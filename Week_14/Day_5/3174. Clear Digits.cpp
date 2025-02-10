class Solution {
    public:
        string clearDigits(string s) {
            string ns = "";
            stack<char> st;
            for(int i=0; i<s.size(); i++)
            {
                if(s[i]>='0' && s[i] <= '9')
                    st.pop();
                else
                    st.push(s[i]);
            }
            while(!st.empty())
            {
                ns.push_back(st.top());
                st.pop();
            }
            reverse(ns.begin(), ns.end());
            return ns;
        }
    };