class Solution {
public:
    string defangIPaddr(string address) {
        string s = "";
        for(auto x : address)
        {
            if(x=='.')
            {
                s.push_back('[');
                s.push_back(x);
                s.push_back(']');
            }
            else
                s.push_back(x);
        }
        return s;
    }
};