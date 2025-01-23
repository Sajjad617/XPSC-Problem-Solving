class Solution {
public:
    string reversePrefix(string word, char ch) {
        int f = word.find(ch);
        if(f<=word.size())
        {
            reverse(word.begin(), word.begin()+f+1);

        }
        return word;
    }
};