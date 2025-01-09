class Solution {
public:
    vector<int> minOperations(string boxes) {
        int one = 0, sumix = 0, cnt = 0;
        int sz = boxes.size();
        for(int i=0; i<sz; i++)
        {
            if(boxes[i]=='1')
            {
                one++;
                sumix += i;
            }
        }
        vector<int> v;
        for(int i=0; i<sz; i++)
        {
            v.push_back(sumix);
            if(boxes[i]=='1')
            {
                one--;
                cnt++;
            }
            sumix = sumix - one + cnt;
        }
        return v;

    }
};