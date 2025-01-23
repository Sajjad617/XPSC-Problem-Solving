class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char, char> mp;
        // vector<pair<char, char>>
        string s = "";
        char ch = 'a';
        for(int i = 0; i<key.size(); i++)
        {
            if(key[i] != ' ' && mp[key[i]]==0)
            {
                mp[key[i]] = ch;
                ch++;
            }
            
            
        }
        for(int i = 0; i<message.size(); i++)
        {
            if(message[i] == ' ')
                s.push_back(' ');
            else
            {
                // char a = mp[message[i]].second;
                s.push_back(mp[message[i]]);
            }
        }
        return s;

    }
};