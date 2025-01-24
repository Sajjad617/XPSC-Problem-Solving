class Solution {
public:
    string interpret(string command) {
        int n = command.size();
        string s = "";
        for(int i=0; i<n; i++)
        {
            if(command[i]=='G')
                s.push_back('G');
            else
            {
                i++;
                if(command[i]==')')
                    s.push_back('o');
                else
                {
                    i +=2;
                    s.push_back('a');
                    s.push_back('l');
                }
            }
        }
        return s;
    }
};