class Solution {
public:
    long long countOfSubstrings(string word, int k) {
            auto f = [&](int k) -> long long {
            long long cal = 0;
            int l = 0, cnt = 0;
            unordered_map<char, int> mp;
            auto vowel = [&](char c) -> bool{
                return c == 'a' || c=='e' || c=='i' || c=='o' || c=='u';
            };

            // }
            for(char c : word)
            {
                if(vowel(c))
                    mp[c]++;
                else
                    cnt++;
                
                while(cnt >= k && mp.size()==5)
                {
                    char d = word[l++];
                    if(vowel(d))
                    {
                        if(--mp[d]==0)
                            mp.erase(d);
                    }
                    else
                        cnt--;
                }
                cal += l;
            }
            return cal;
        };
        return f(k)-f(k+1);
    }
};