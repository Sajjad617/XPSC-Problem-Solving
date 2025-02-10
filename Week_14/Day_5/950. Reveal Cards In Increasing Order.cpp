class Solution {
    public:
        vector<int> deckRevealedIncreasing(vector<int>& deck) {
            sort(deck.rbegin(), deck.rend());
            deque<int> q;
            for(int x : deck)
            {
                if(!q.empty())
                {
                    q.push_front(q.back());
                    q.pop_back();
                }
                q.push_front(x);
            }
            vector<int> v;
            while(!q.empty())
            {
                v.push_back(q.front());
                q.pop_front();
            }
            // reverse(v.begin(), v.end());
            return v;
            // return vector<int>(q.begin(), q.end());
        }
    };