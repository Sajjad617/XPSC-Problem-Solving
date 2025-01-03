class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;
        for(auto z : operations)
        {
            if(z.back()=='-' || z.front()=='-')
                x--;
            else
                x++;
        }
        return x;
        
    }
};