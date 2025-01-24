class Solution {
public:
map<string, string> en, de;
    string s = "http://tinyurl.com/";
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string shortUrl = s + to_string(longUrl.size());
        en[longUrl] = shortUrl;
        de[shortUrl] = longUrl;
        return en[longUrl];
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return de[shortUrl];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));