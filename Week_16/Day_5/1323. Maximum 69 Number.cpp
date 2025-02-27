class Solution {
    public:
        int maximum69Number (int num) {
            string s = to_string(num);
            for(char& x : s)
            {
                if(x=='6')
                {
                    x='9';
                    break;
                }
            }
            return(stoi(s));
        }
    };