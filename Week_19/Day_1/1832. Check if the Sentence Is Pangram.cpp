class Solution {
    public:
        bool checkIfPangram(string sentence) {
            set<char> tk;
            for(auto x : sentence)
                tk.insert(x);
            
            if(tk.size()==26)
                return true;
            else
                return false;
            
        }
    };